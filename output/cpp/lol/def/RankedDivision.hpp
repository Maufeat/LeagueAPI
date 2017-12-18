#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RankedDivision {  
    I_e = 1,
    II_e = 2,
    III_e = 3,
    IV_e = 4,
    V_e = 5,
  };
  inline void to_json(json& j, const RankedDivision& v) {
    if(v == RankedDivision::I_e) {
      j = "I";
      return;
    }
    if(v == RankedDivision::II_e) {
      j = "II";
      return;
    }
    if(v == RankedDivision::III_e) {
      j = "III";
      return;
    }
    if(v == RankedDivision::IV_e) {
      j = "IV";
      return;
    }
    if(v == RankedDivision::V_e) {
      j = "V";
      return;
    }
  }
  inline void from_json(const json& j, RankedDivision& v) {
    if(j.get<std::string>() == "I") {
      v = RankedDivision::I_e;
      return;
    } 
    if(j.get<std::string>() == "II") {
      v = RankedDivision::II_e;
      return;
    } 
    if(j.get<std::string>() == "III") {
      v = RankedDivision::III_e;
      return;
    } 
    if(j.get<std::string>() == "IV") {
      v = RankedDivision::IV_e;
      return;
    } 
    if(j.get<std::string>() == "V") {
      v = RankedDivision::V_e;
      return;
    } 
  }
}