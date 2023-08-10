#include <doctest/doctest.h>
#include <polyfills/numbers>

// adapted from
// https://github.com/microsoft/STL/blob/ed8150e099f6124c50dd4f002cd2ab8c429a81e3/tests/std/tests/P0631R8_numbers_math_constants/test.cpp#L124
// under Apache License v2.0 with LLVM Exceptions

struct meme_numeral_t {
  int value;
};

template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::e_v<meme_numeral_t>{-10};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::log2e_v<meme_numeral_t>{-20};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::log10e_v<meme_numeral_t>{-30};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::pi_v<meme_numeral_t>{-40};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::inv_pi_v<meme_numeral_t>{-50};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::inv_sqrtpi_v<meme_numeral_t>{
    -60};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::ln2_v<meme_numeral_t>{-70};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::ln10_v<meme_numeral_t>{-80};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::sqrt2_v<meme_numeral_t>{-90};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::sqrt3_v<meme_numeral_t>{-100};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::inv_sqrt3_v<meme_numeral_t>{
    -110};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::egamma_v<meme_numeral_t>{-120};
template <>
NPF_INLINE constexpr meme_numeral_t pf::numbers::phi_v<meme_numeral_t>{-130};

TEST_CASE("meme_numeral_test") {
  REQUIRE_EQ(pf::numbers::e_v<meme_numeral_t>.value, -10);
  REQUIRE_EQ(pf::numbers::log2e_v<meme_numeral_t>.value, -20);
  REQUIRE_EQ(pf::numbers::log10e_v<meme_numeral_t>.value, -30);
  REQUIRE_EQ(pf::numbers::pi_v<meme_numeral_t>.value, -40);
  REQUIRE_EQ(pf::numbers::inv_pi_v<meme_numeral_t>.value, -50);
  REQUIRE_EQ(pf::numbers::inv_sqrtpi_v<meme_numeral_t>.value, -60);
  REQUIRE_EQ(pf::numbers::ln2_v<meme_numeral_t>.value, -70);
  REQUIRE_EQ(pf::numbers::ln10_v<meme_numeral_t>.value, -80);
  REQUIRE_EQ(pf::numbers::sqrt2_v<meme_numeral_t>.value, -90);
  REQUIRE_EQ(pf::numbers::sqrt3_v<meme_numeral_t>.value, -100);
  REQUIRE_EQ(pf::numbers::inv_sqrt3_v<meme_numeral_t>.value, -110);
  REQUIRE_EQ(pf::numbers::egamma_v<meme_numeral_t>.value, -120);
  REQUIRE_EQ(pf::numbers::phi_v<meme_numeral_t>.value, -130);
}