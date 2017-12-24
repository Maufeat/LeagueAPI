#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerLevelUpEvent { 
    bool leveledUp;
    std::vector<uint64_t> newSpells;
    bool switchedToStandardFreeToPlayChampRotation;
    std::vector<int32_t> newQueues;
    uint32_t newSummonerLevel;
    bool nowHasAccessToPublicChatRooms;
    bool nowHasAccessToLoot;
    int32_t rpEarned;
    bool nowHasAccessToMastery;
    bool newMasterySlotUnlocked;
    bool newRuneSlotUnlocked; 
  };
  inline void to_json(json& j, const PlayerLevelUpEvent& v) {
    j["leveledUp"] = v.leveledUp; 
    j["newSpells"] = v.newSpells; 
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation; 
    j["newQueues"] = v.newQueues; 
    j["newSummonerLevel"] = v.newSummonerLevel; 
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms; 
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot; 
    j["rpEarned"] = v.rpEarned; 
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery; 
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked; 
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked; 
  }
  inline void from_json(const json& j, PlayerLevelUpEvent& v) {
    v.leveledUp = j.at("leveledUp").get<bool>(); 
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>(); 
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>(); 
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>(); 
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>(); 
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>(); 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>(); 
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>(); 
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>(); 
  }
}