#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct GameClientChatMessageResource { /**/ 
    std::string fromSummonerName;/**/
    std::string body;/**/
  };
  static void to_json(json& j, const GameClientChatMessageResource& v) { 
    j["fromSummonerName"] = v.fromSummonerName;
    j["body"] = v.body;
  }
  static void from_json(const json& j, GameClientChatMessageResource& v) { 
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
    v.body = j.at("body").get<std::string>(); 
  }
} 