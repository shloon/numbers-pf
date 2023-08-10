#include <doctest/doctest.h>
#include <polyfills/numbers>

TEST_CASE("double_test") {
  REQUIRE_EQ(pf::numbers::e, pf::numbers::e_v<double>);
  REQUIRE_EQ(pf::numbers::log2e, pf::numbers::log2e_v<double>);
  REQUIRE_EQ(pf::numbers::log10e, pf::numbers::log10e_v<double>);
  REQUIRE_EQ(pf::numbers::pi, pf::numbers::pi_v<double>);
  REQUIRE_EQ(pf::numbers::inv_pi, pf::numbers::inv_pi_v<double>);
  REQUIRE_EQ(pf::numbers::inv_sqrtpi, pf::numbers::inv_sqrtpi_v<double>);
  REQUIRE_EQ(pf::numbers::ln2, pf::numbers::ln2_v<double>);
  REQUIRE_EQ(pf::numbers::ln10, pf::numbers::ln10_v<double>);
  REQUIRE_EQ(pf::numbers::sqrt2, pf::numbers::sqrt2_v<double>);
  REQUIRE_EQ(pf::numbers::sqrt3, pf::numbers::sqrt3_v<double>);
  REQUIRE_EQ(pf::numbers::inv_sqrt3, pf::numbers::inv_sqrt3_v<double>);
  REQUIRE_EQ(pf::numbers::egamma, pf::numbers::egamma_v<double>);
  REQUIRE_EQ(pf::numbers::phi, pf::numbers::phi_v<double>);

  REQUIRE_EQ(pf::numbers::e, 2.7182818284590452354);
  REQUIRE_EQ(pf::numbers::log2e, 1.4426950408889634074);
  REQUIRE_EQ(pf::numbers::log10e, .43429448190325182765);
  REQUIRE_EQ(pf::numbers::pi, 3.1415926535897932385);
  REQUIRE_EQ(pf::numbers::inv_pi, .31830988618379067154);
  REQUIRE_EQ(pf::numbers::inv_sqrtpi, .56418958354775628695);
  REQUIRE_EQ(pf::numbers::ln2, .69314718055994530942);
  REQUIRE_EQ(pf::numbers::ln10, 2.3025850929940456840);
  REQUIRE_EQ(pf::numbers::sqrt2, 1.4142135623730950488);
  REQUIRE_EQ(pf::numbers::sqrt3, 1.7320508075688772935);
  REQUIRE_EQ(pf::numbers::inv_sqrt3, .57735026918962576451);
  REQUIRE_EQ(pf::numbers::egamma, .57721566490153286061);
  REQUIRE_EQ(pf::numbers::phi, 1.6180339887498948482);
}

TEST_CASE("float_test") {
  REQUIRE_EQ(pf::numbers::e_v<float>, 2.71828183F);
  REQUIRE_EQ(pf::numbers::log2e_v<float>, 1.44269504F);
  REQUIRE_EQ(pf::numbers::log10e_v<float>, .434294482F);
  REQUIRE_EQ(pf::numbers::pi_v<float>, 3.14159265F);
  REQUIRE_EQ(pf::numbers::inv_pi_v<float>, .318309886F);
  REQUIRE_EQ(pf::numbers::inv_sqrtpi_v<float>, .564189584F);
  REQUIRE_EQ(pf::numbers::ln2_v<float>, .693147181F);
  REQUIRE_EQ(pf::numbers::ln10_v<float>, 2.30258509F);
  REQUIRE_EQ(pf::numbers::sqrt2_v<float>, 1.41421356F);
  REQUIRE_EQ(pf::numbers::sqrt3_v<float>, 1.73205081F);
  REQUIRE_EQ(pf::numbers::inv_sqrt3_v<float>, .577350269F);
  REQUIRE_EQ(pf::numbers::egamma_v<float>, .577215665F);
  REQUIRE_EQ(pf::numbers::phi_v<float>, 1.61803399F);
}

#if __cplusplus >= __cpp_hex_float
TEST_CASE("precise_double_test") {
  // constants taken from
  // https://github.com/llvm-mirror/llvm/blob/2c4ca6832fa6b306ee6a7010bfb80a3f2596f824/include/llvm/Support/MathExtras.h#L57
  // under APACHE 2.0 with LLVM exceptions
  REQUIRE_EQ(pf::numbers::e, 0x1.5bf0a8b145769p+1);
  REQUIRE_EQ(pf::numbers::log2e, 0x1.71547652b82fep+0);
  REQUIRE_EQ(pf::numbers::log10e, 0x1.bcb7b1526e50ep-2);
  REQUIRE_EQ(pf::numbers::pi, 0x1.921fb54442d18p+1);
  REQUIRE_EQ(pf::numbers::inv_pi, 0x1.45f306dc9c883p-2);
  REQUIRE_EQ(pf::numbers::inv_sqrtpi, 0x1.20dd750429b6dp-1);
  REQUIRE_EQ(pf::numbers::ln2, 0x1.62e42fefa39efp-1);
  REQUIRE_EQ(pf::numbers::ln10, 0x1.26bb1bbb55516p+1);
  REQUIRE_EQ(pf::numbers::sqrt2, 0x1.6a09e667f3bcdp+0);
  REQUIRE_EQ(pf::numbers::sqrt3, 0x1.bb67ae8584caap+0);
  REQUIRE_EQ(pf::numbers::inv_sqrt3, 0x1.279a74590331cp-1);
  REQUIRE_EQ(pf::numbers::egamma, 0x1.2788cfc6fb619p-1);
  REQUIRE_EQ(pf::numbers::phi, 0x1.9e3779b97f4a8p+0);
}

TEST_CASE("precise_float_tests") {
  // constants taken from
  // https://github.com/llvm-mirror/llvm/blob/2c4ca6832fa6b306ee6a7010bfb80a3f2596f824/include/llvm/Support/MathExtras.h#L57
  // under APACHE 2.0 with LLVM exceptions

  REQUIRE_EQ(pf::numbers::e_v<float>, 0x1.5bf0a8P+1);
  REQUIRE_EQ(pf::numbers::log2e_v<float>, 0x1.715476P+0);
  REQUIRE_EQ(pf::numbers::log10e_v<float>, 0x1.bcb7b2P-2);
  REQUIRE_EQ(pf::numbers::pi_v<float>, 0x1.921fb6P+1);
  REQUIRE_EQ(pf::numbers::inv_pi_v<float>, 0x1.45f306P-2);
  REQUIRE_EQ(pf::numbers::inv_sqrtpi_v<float>, 0x1.20dd76P-1);
  REQUIRE_EQ(pf::numbers::ln2_v<float>, 0x1.62e430P-1);
  REQUIRE_EQ(pf::numbers::ln10_v<float>, 0x1.26bb1cP+1);
  REQUIRE_EQ(pf::numbers::sqrt2_v<float>, 0x1.6a09e6P+0);
  REQUIRE_EQ(pf::numbers::sqrt3_v<float>, 0x1.bb67aeP+0);
  REQUIRE_EQ(pf::numbers::inv_sqrt3_v<float>, 0x1.279a74P-1);
  REQUIRE_EQ(pf::numbers::egamma_v<float>, 0x1.2788d0P-1);
  REQUIRE_EQ(pf::numbers::phi_v<float>, 0x1.9e377aP+0);
}
#endif