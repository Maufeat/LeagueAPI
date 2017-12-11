#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct EndOfGameLcdsPointsPenalty { /**/ 
    std::string type;/**/
    double penalty;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsPointsPenalty& v) { 
    j["type"] = v.type;
    j["penalty"] = v.penalty;
  }
  static void from_json(const json& j, EndOfGameLcdsPointsPenalty& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.penalty = j.at("penalty").get<double>(); 
  }
} 