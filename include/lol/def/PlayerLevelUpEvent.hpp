#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerLevelUpEvent { 
    bool leveledUp;
    std::vector<int32_t> newQueues;
    bool nowHasAccessToPublicChatRooms;
    bool newMasterySlotUnlocked;
    uint32_t newSummonerLevel;
    bool newRuneSlotUnlocked;
    bool nowHasAccessToLoot;
    int32_t rpEarned;
    std::vector<uint64_t> newSpells;
    bool nowHasAccessToMastery;
    bool switchedToStandardFreeToPlayChampRotation; 
  };
  inline void to_json(json& j, const PlayerLevelUpEvent& v) {
    j["leveledUp"] = v.leveledUp; 
    j["newQueues"] = v.newQueues; 
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms; 
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked; 
    j["newSummonerLevel"] = v.newSummonerLevel; 
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked; 
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot; 
    j["rpEarned"] = v.rpEarned; 
    j["newSpells"] = v.newSpells; 
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery; 
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation; 
  }
  inline void from_json(const json& j, PlayerLevelUpEvent& v) {
    v.leveledUp = j.at("leveledUp").get<bool>(); 
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>(); 
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>(); 
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>(); 
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>(); 
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>(); 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>(); 
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>(); 
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>(); 
  }
}