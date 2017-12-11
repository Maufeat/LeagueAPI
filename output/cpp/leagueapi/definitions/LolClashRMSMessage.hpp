#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashRMSMessage { /**/ 
    int64_t timestamp;/**/
    std::string payload;/**/
  };
  static void to_json(json& j, const LolClashRMSMessage& v) { 
    j["timestamp"] = v.timestamp;
    j["payload"] = v.payload;
  }
  static void from_json(const json& j, LolClashRMSMessage& v) { 
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
} 