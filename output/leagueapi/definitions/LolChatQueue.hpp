#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChatQueueGameTypeConfig.hpp>"

namespace leagueapi {
  struct LolChatQueue { /**/ 
    std::string type;/**/
    LolChatQueueGameTypeConfig gameTypeConfig;/**/
    int32_t id;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolChatQueue& v) { 
    j["type"] = v.type;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolChatQueue& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 