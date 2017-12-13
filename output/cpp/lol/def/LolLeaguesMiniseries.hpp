#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLeaguesMiniseries {  
    L_e = 1,
    N_e = 2,
    W_e = 0,
  };
  void to_json(json& j, const LolLeaguesMiniseries& v) {
    if(v == LolLeaguesMiniseries::L_e) {
      j = "L";
      return;
    }
    if(v == LolLeaguesMiniseries::N_e) {
      j = "N";
      return;
    }
    if(v == LolLeaguesMiniseries::W_e) {
      j = "W";
      return;
    }
  }
  void from_json(const json& j, LolLeaguesMiniseries& v) {
    if(j.get<std::string>() == "L") {
      v = LolLeaguesMiniseries::L_e;
      return;
    } 
    if(j.get<std::string>() == "N") {
      v = LolLeaguesMiniseries::N_e;
      return;
    } 
    if(j.get<std::string>() == "W") {
      v = LolLeaguesMiniseries::W_e;
      return;
    } 
  }
}