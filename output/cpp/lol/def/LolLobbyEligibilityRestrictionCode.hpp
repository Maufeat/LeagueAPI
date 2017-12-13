#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyEligibilityRestrictionCode {  
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
  void to_json(json& j, const LolLobbyEligibilityRestrictionCode& v) {
  if(v == LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e) {
    j = "PlayerAvailableChampionRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction_e) {
    j = "PlayerBannedRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction_e) {
    j = "PlayerBingeRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction_e) {
    j = "PlayerDodgeRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction_e) {
    j = "PlayerInGameRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e) {
    j = "PlayerLeaverBustedRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e) {
    j = "PlayerLeaverTaintedWarningRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction_e) {
    j = "PlayerLevelRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction_e) {
    j = "PlayerMaxLevelRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction_e) {
    j = "PlayerMinLevelRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction_e) {
    j = "PlayerMinorRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e) {
    j = "PlayerRankedSuspensionRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction_e) {
    j = "PlayerTimedRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e) {
    j = "PrerequisiteQueuesNotPlayedRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::QueueDisabled_e) {
    j = "QueueDisabled";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::QueueUnsupported_e) {
    j = "QueueUnsupported";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::TeamDivisionRestriction_e) {
    j = "TeamDivisionRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e) {
    j = "TeamHighMMRMaxSizeRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction_e) {
    j = "TeamMaxSizeRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction_e) {
    j = "TeamMinSizeRestriction";
    return;
  }
  if(v == LolLobbyEligibilityRestrictionCode::UnknownRestriction_e) {
    j = "UnknownRestriction";
    return;
  }
  }
  void from_json(const json& j, LolLobbyEligibilityRestrictionCode& v) {
  if(j.get<std::string>() == "PlayerAvailableChampionRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerBannedRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerBingeRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerDodgeRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerInGameRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerLeaverBustedRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerLeaverTaintedWarningRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerLevelRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerMaxLevelRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerMinLevelRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerMinorRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerRankedSuspensionRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PlayerTimedRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "PrerequisiteQueuesNotPlayedRestriction") {
    v = LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "QueueDisabled") {
    v = LolLobbyEligibilityRestrictionCode::QueueDisabled_e;
    return;
  } 
  if(j.get<std::string>() == "QueueUnsupported") {
    v = LolLobbyEligibilityRestrictionCode::QueueUnsupported_e;
    return;
  } 
  if(j.get<std::string>() == "TeamDivisionRestriction") {
    v = LolLobbyEligibilityRestrictionCode::TeamDivisionRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "TeamHighMMRMaxSizeRestriction") {
    v = LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "TeamMaxSizeRestriction") {
    v = LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "TeamMinSizeRestriction") {
    v = LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction_e;
    return;
  } 
  if(j.get<std::string>() == "UnknownRestriction") {
    v = LolLobbyEligibilityRestrictionCode::UnknownRestriction_e;
    return;
  } 
  }
}