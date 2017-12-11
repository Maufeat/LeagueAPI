#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLeaguesMiniseries { /**/ 
    L_e = 1, /**/ 
    N_e = 2, /**/ 
    W_e = 0, /**/ 
  };
  static void to_json(json& j, const LolLeaguesMiniseries& v) {
    switch(v) { 
    case LolLeaguesMiniseries::L_e:
      j = "L";
    break;
    case LolLeaguesMiniseries::N_e:
      j = "N";
    break;
    case LolLeaguesMiniseries::W_e:
      j = "W";
    break;
    };
  }
  static void from_json(const json& j, LolLeaguesMiniseries& v) {
    auto s = j.get<std::string>(); 
    if(s == "L") {
      v = LolLeaguesMiniseries::L_e;
      return;
    } 
    if(s == "N") {
      v = LolLeaguesMiniseries::N_e;
      return;
    } 
    if(s == "W") {
      v = LolLeaguesMiniseries::W_e;
      return;
    } 
  }
} 