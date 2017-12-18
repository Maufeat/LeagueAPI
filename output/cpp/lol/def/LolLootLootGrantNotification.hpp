#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootLootGrantNotification { 
    std::string playerGrade;
    std::string msgId;
    std::string lootName;
    uint64_t gameId;
    std::string messageKey;
    int64_t id;
    uint64_t accountId;
    int32_t championId;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const LolLootLootGrantNotification& v) {
    j["playerGrade"] = v.playerGrade; 
    j["msgId"] = v.msgId; 
    j["lootName"] = v.lootName; 
    j["gameId"] = v.gameId; 
    j["messageKey"] = v.messageKey; 
    j["id"] = v.id; 
    j["accountId"] = v.accountId; 
    j["championId"] = v.championId; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, LolLootLootGrantNotification& v) {
    v.playerGrade = j.at("playerGrade").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.messageKey = j.at("messageKey").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}