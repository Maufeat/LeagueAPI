#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerLevelUpEvent { 
    bool switchedToStandardFreeToPlayChampRotation;
    bool nowHasAccessToPublicChatRooms;
    bool nowHasAccessToLoot;
    bool nowHasAccessToMastery;
    bool leveledUp;
    uint32_t newSummonerLevel;
    bool newRuneSlotUnlocked;
    bool newMasterySlotUnlocked;
    int32_t rpEarned;
    std::vector<uint64_t> newSpells;
    std::vector<int32_t> newQueues; 
  };
  inline void to_json(json& j, const PlayerLevelUpEvent& v) {
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation; 
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms; 
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot; 
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery; 
    j["leveledUp"] = v.leveledUp; 
    j["newSummonerLevel"] = v.newSummonerLevel; 
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked; 
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked; 
    j["rpEarned"] = v.rpEarned; 
    j["newSpells"] = v.newSpells; 
    j["newQueues"] = v.newQueues; 
  }
  inline void from_json(const json& j, PlayerLevelUpEvent& v) {
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>(); 
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>(); 
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>(); 
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>(); 
    v.leveledUp = j.at("leveledUp").get<bool>(); 
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>(); 
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>(); 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>(); 
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>(); 
  }
}