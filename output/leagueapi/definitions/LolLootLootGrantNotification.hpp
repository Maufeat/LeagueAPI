#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLootLootGrantNotification { /**/ 
    uint64_t playerId;/**/
    std::string messageKey;/**/
    int64_t id;/**/
    std::string playerGrade;/**/
    std::string lootName;/**/
    uint64_t gameId;/**/
    std::string msgId;/**/
    int32_t championId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolLootLootGrantNotification& v) { 
    j["playerId"] = v.playerId;
    j["messageKey"] = v.messageKey;
    j["id"] = v.id;
    j["playerGrade"] = v.playerGrade;
    j["lootName"] = v.lootName;
    j["gameId"] = v.gameId;
    j["msgId"] = v.msgId;
    j["championId"] = v.championId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolLootLootGrantNotification& v) { 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.messageKey = j.at("messageKey").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.playerGrade = j.at("playerGrade").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 