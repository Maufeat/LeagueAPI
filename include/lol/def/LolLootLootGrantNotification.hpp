#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootLootGrantNotification { 
    int64_t id;
    uint64_t gameId;
    uint64_t playerId;
    int32_t championId;
    std::string playerGrade;
    std::string lootName;
    std::string messageKey;
    std::string msgId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolLootLootGrantNotification& v) {
    j["id"] = v.id; 
    j["gameId"] = v.gameId; 
    j["playerId"] = v.playerId; 
    j["championId"] = v.championId; 
    j["playerGrade"] = v.playerGrade; 
    j["lootName"] = v.lootName; 
    j["messageKey"] = v.messageKey; 
    j["msgId"] = v.msgId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolLootLootGrantNotification& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.playerGrade = j.at("playerGrade").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.messageKey = j.at("messageKey").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}