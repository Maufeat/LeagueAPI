#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameRMSMessage { /**/ 
    int64_t timestamp;/**/
    std::string payload;/**/
  };
  static void to_json(json& j, const LolEndOfGameRMSMessage& v) { 
    j["timestamp"] = v.timestamp;
    j["payload"] = v.payload;
  }
  static void from_json(const json& j, LolEndOfGameRMSMessage& v) { 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
} 