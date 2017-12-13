#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerLevelUpEvent { 
    std::vector<int32_t> newQueues;
    uint32_t newSummonerLevel;
    bool nowHasAccessToLoot;
    bool newMasterySlotUnlocked;
    std::vector<uint64_t> newSpells;
    int32_t rpEarned;
    bool switchedToStandardFreeToPlayChampRotation;
    bool nowHasAccessToPublicChatRooms;
    bool nowHasAccessToMastery;
    bool newRuneSlotUnlocked;
    bool leveledUp; 
  };
  void to_json(json& j, const PlayerLevelUpEvent& v) {
    j["newQueues"] = v.newQueues; 
    j["newSummonerLevel"] = v.newSummonerLevel; 
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot; 
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked; 
    j["newSpells"] = v.newSpells; 
    j["rpEarned"] = v.rpEarned; 
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation; 
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms; 
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery; 
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked; 
    j["leveledUp"] = v.leveledUp; 
  }
  void from_json(const json& j, PlayerLevelUpEvent& v) {
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>(); 
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>(); 
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>(); 
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>(); 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>(); 
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>(); 
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>(); 
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>(); 
    v.leveledUp = j.at("leveledUp").get<bool>(); 
  }
}