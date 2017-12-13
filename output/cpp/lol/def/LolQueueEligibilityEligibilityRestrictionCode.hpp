#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolQueueEligibilityEligibilityRestrictionCode {  
    PlayerAvailableChampionRestriction_e = 5,
    PlayerBannedRestriction_e = 4,
    PlayerBingeRestriction_e = 9,
    PlayerDodgeRestriction_e = 10,
    PlayerInGameRestriction_e = 11,
    PlayerLeaverBustedRestriction_e = 12,
    PlayerLeaverTaintedWarningRestriction_e = 13,
    PlayerLevelRestriction_e = 2,
    PlayerMaxLevelRestriction_e = 14,
    PlayerMinLevelRestriction_e = 15,
    PlayerMinorRestriction_e = 16,
    PlayerRankedSuspensionRestriction_e = 17,
    PlayerTimedRestriction_e = 3,
    PrerequisiteQueuesNotPlayedRestriction_e = 19,
    QueueDisabled_e = 0,
    QueueUnsupported_e = 1,
    TeamDivisionRestriction_e = 6,
    TeamHighMMRMaxSizeRestriction_e = 18,
    TeamMaxSizeRestriction_e = 7,
    TeamMinSizeRestriction_e = 8,
    UnknownRestriction_e = 20,
  };
  void to_json(json& j, const LolQueueEligibilityEligibilityRestrictionCode& v) {
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e) {
      j = "PlayerAvailableChampionRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerBannedRestriction_e) {
      j = "PlayerBannedRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerBingeRestriction_e) {
      j = "PlayerBingeRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerDodgeRestriction_e) {
      j = "PlayerDodgeRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerInGameRestriction_e) {
      j = "PlayerInGameRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e) {
      j = "PlayerLeaverBustedRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e) {
      j = "PlayerLeaverTaintedWarningRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerLevelRestriction_e) {
      j = "PlayerLevelRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerMaxLevelRestriction_e) {
      j = "PlayerMaxLevelRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerMinLevelRestriction_e) {
      j = "PlayerMinLevelRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerMinorRestriction_e) {
      j = "PlayerMinorRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e) {
      j = "PlayerRankedSuspensionRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PlayerTimedRestriction_e) {
      j = "PlayerTimedRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e) {
      j = "PrerequisiteQueuesNotPlayedRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::QueueDisabled_e) {
      j = "QueueDisabled";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::QueueUnsupported_e) {
      j = "QueueUnsupported";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::TeamDivisionRestriction_e) {
      j = "TeamDivisionRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e) {
      j = "TeamHighMMRMaxSizeRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::TeamMaxSizeRestriction_e) {
      j = "TeamMaxSizeRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::TeamMinSizeRestriction_e) {
      j = "TeamMinSizeRestriction";
      return;
    }
    if(v == LolQueueEligibilityEligibilityRestrictionCode::UnknownRestriction_e) {
      j = "UnknownRestriction";
      return;
    }
  }
  void from_json(const json& j, LolQueueEligibilityEligibilityRestrictionCode& v) {
    if(j.get<std::string>() == "PlayerAvailableChampionRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerBannedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerBannedRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerBingeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerBingeRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerDodgeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerDodgeRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerInGameRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerInGameRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerLeaverBustedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerLeaverTaintedWarningRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerLevelRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLevelRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerMaxLevelRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMaxLevelRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerMinLevelRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMinLevelRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerMinorRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMinorRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerRankedSuspensionRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PlayerTimedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerTimedRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "PrerequisiteQueuesNotPlayedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "QueueDisabled") {
      v = LolQueueEligibilityEligibilityRestrictionCode::QueueDisabled_e;
      return;
    } 
    if(j.get<std::string>() == "QueueUnsupported") {
      v = LolQueueEligibilityEligibilityRestrictionCode::QueueUnsupported_e;
      return;
    } 
    if(j.get<std::string>() == "TeamDivisionRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamDivisionRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "TeamHighMMRMaxSizeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "TeamMaxSizeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamMaxSizeRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "TeamMinSizeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamMinSizeRestriction_e;
      return;
    } 
    if(j.get<std::string>() == "UnknownRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::UnknownRestriction_e;
      return;
    } 
  }
}