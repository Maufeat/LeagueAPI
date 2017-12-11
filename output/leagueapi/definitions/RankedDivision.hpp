#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RankedDivision { /**/ 
    I_e = 1, /**/ 
    II_e = 2, /**/ 
    III_e = 3, /**/ 
    IV_e = 4, /**/ 
    V_e = 5, /**/ 
  };
  static void to_json(json& j, const RankedDivision& v) {
    switch(v) { 
    case RankedDivision::I_e:
      j = "I";
    break;
    case RankedDivision::II_e:
      j = "II";
    break;
    case RankedDivision::III_e:
      j = "III";
    break;
    case RankedDivision::IV_e:
      j = "IV";
    break;
    case RankedDivision::V_e:
      j = "V";
    break;
    };
  }
  static void from_json(const json& j, RankedDivision& v) {
    auto s = j.get<std::string>(); 
    if(s == "I") {
      v = RankedDivision::I_e;
      return;
    } 
    if(s == "II") {
      v = RankedDivision::II_e;
      return;
    } 
    if(s == "III") {
      v = RankedDivision::III_e;
      return;
    } 
    if(s == "IV") {
      v = RankedDivision::IV_e;
      return;
    } 
    if(s == "V") {
      v = RankedDivision::V_e;
      return;
    } 
  }
} 