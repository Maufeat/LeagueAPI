#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerLevelUpEvent { /**/ 
    bool switchedToStandardFreeToPlayChampRotation;/**/
    bool newMasterySlotUnlocked;/**/
    bool newRuneSlotUnlocked;/**/
    bool nowHasAccessToLoot;/**/
    bool nowHasAccessToMastery;/**/
    std::vector<uint64_t> newSpells;/**/
    std::vector<int32_t> newQueues;/**/
    bool leveledUp;/**/
    int32_t rpEarned;/**/
    uint32_t newSummonerLevel;/**/
    bool nowHasAccessToPublicChatRooms;/**/
  };
  static void to_json(json& j, const PlayerLevelUpEvent& v) { 
    j["switchedToStandardFreeToPlayChampRotation"] = v.switchedToStandardFreeToPlayChampRotation;
    j["newMasterySlotUnlocked"] = v.newMasterySlotUnlocked;
    j["newRuneSlotUnlocked"] = v.newRuneSlotUnlocked;
    j["nowHasAccessToLoot"] = v.nowHasAccessToLoot;
    j["nowHasAccessToMastery"] = v.nowHasAccessToMastery;
    j["newSpells"] = v.newSpells;
    j["newQueues"] = v.newQueues;
    j["leveledUp"] = v.leveledUp;
    j["rpEarned"] = v.rpEarned;
    j["newSummonerLevel"] = v.newSummonerLevel;
    j["nowHasAccessToPublicChatRooms"] = v.nowHasAccessToPublicChatRooms;
  }
  static void from_json(const json& j, PlayerLevelUpEvent& v) { 
    v.switchedToStandardFreeToPlayChampRotation = j.at("switchedToStandardFreeToPlayChampRotation").get<bool>(); 
    v.newMasterySlotUnlocked = j.at("newMasterySlotUnlocked").get<bool>(); 
    v.newRuneSlotUnlocked = j.at("newRuneSlotUnlocked").get<bool>(); 
    v.nowHasAccessToLoot = j.at("nowHasAccessToLoot").get<bool>(); 
    v.nowHasAccessToMastery = j.at("nowHasAccessToMastery").get<bool>(); 
    v.newSpells = j.at("newSpells").get<std::vector<uint64_t>>(); 
    v.newQueues = j.at("newQueues").get<std::vector<int32_t>>(); 
    v.leveledUp = j.at("leveledUp").get<bool>(); 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.newSummonerLevel = j.at("newSummonerLevel").get<uint32_t>(); 
    v.nowHasAccessToPublicChatRooms = j.at("nowHasAccessToPublicChatRooms").get<bool>(); 
  }
} 