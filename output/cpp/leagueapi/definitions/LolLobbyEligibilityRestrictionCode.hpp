#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyEligibilityRestrictionCode { /**/ 
    PlayerAvailableChampionRestriction_e = 5, /**/ 
    PlayerBannedRestriction_e = 4, /**/ 
    PlayerBingeRestriction_e = 9, /**/ 
    PlayerDodgeRestriction_e = 10, /**/ 
    PlayerInGameRestriction_e = 11, /**/ 
    PlayerLeaverBustedRestriction_e = 12, /**/ 
    PlayerLeaverTaintedWarningRestriction_e = 13, /**/ 
    PlayerLevelRestriction_e = 2, /**/ 
    PlayerMaxLevelRestriction_e = 14, /**/ 
    PlayerMinLevelRestriction_e = 15, /**/ 
    PlayerMinorRestriction_e = 16, /**/ 
    PlayerRankedSuspensionRestriction_e = 17, /**/ 
    PlayerTimedRestriction_e = 3, /**/ 
    PrerequisiteQueuesNotPlayedRestriction_e = 19, /**/ 
    QueueDisabled_e = 0, /**/ 
    QueueUnsupported_e = 1, /**/ 
    TeamDivisionRestriction_e = 6, /**/ 
    TeamHighMMRMaxSizeRestriction_e = 18, /**/ 
    TeamMaxSizeRestriction_e = 7, /**/ 
    TeamMinSizeRestriction_e = 8, /**/ 
    UnknownRestriction_e = 20, /**/ 
  };
  static void to_json(json& j, const LolLobbyEligibilityRestrictionCode& v) {
    switch(v) { 
    case LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e:
      j = "PlayerAvailableChampionRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction_e:
      j = "PlayerBannedRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction_e:
      j = "PlayerBingeRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction_e:
      j = "PlayerDodgeRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction_e:
      j = "PlayerInGameRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e:
      j = "PlayerLeaverBustedRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e:
      j = "PlayerLeaverTaintedWarningRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction_e:
      j = "PlayerLevelRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction_e:
      j = "PlayerMaxLevelRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction_e:
      j = "PlayerMinLevelRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction_e:
      j = "PlayerMinorRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e:
      j = "PlayerRankedSuspensionRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction_e:
      j = "PlayerTimedRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e:
      j = "PrerequisiteQueuesNotPlayedRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::QueueDisabled_e:
      j = "QueueDisabled";
    break;
    case LolLobbyEligibilityRestrictionCode::QueueUnsupported_e:
      j = "QueueUnsupported";
    break;
    case LolLobbyEligibilityRestrictionCode::TeamDivisionRestriction_e:
      j = "TeamDivisionRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e:
      j = "TeamHighMMRMaxSizeRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction_e:
      j = "TeamMaxSizeRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction_e:
      j = "TeamMinSizeRestriction";
    break;
    case LolLobbyEligibilityRestrictionCode::UnknownRestriction_e:
      j = "UnknownRestriction";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyEligibilityRestrictionCode& v) {
    auto s = j.get<std::string>(); 
    if(s == "PlayerAvailableChampionRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e;
      return;
    } 
    if(s == "PlayerBannedRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction_e;
      return;
    } 
    if(s == "PlayerBingeRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction_e;
      return;
    } 
    if(s == "PlayerDodgeRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction_e;
      return;
    } 
    if(s == "PlayerInGameRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction_e;
      return;
    } 
    if(s == "PlayerLeaverBustedRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e;
      return;
    } 
    if(s == "PlayerLeaverTaintedWarningRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e;
      return;
    } 
    if(s == "PlayerLevelRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction_e;
      return;
    } 
    if(s == "PlayerMaxLevelRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction_e;
      return;
    } 
    if(s == "PlayerMinLevelRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction_e;
      return;
    } 
    if(s == "PlayerMinorRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction_e;
      return;
    } 
    if(s == "PlayerRankedSuspensionRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e;
      return;
    } 
    if(s == "PlayerTimedRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction_e;
      return;
    } 
    if(s == "PrerequisiteQueuesNotPlayedRestriction") {
      v = LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e;
      return;
    } 
    if(s == "QueueDisabled") {
      v = LolLobbyEligibilityRestrictionCode::QueueDisabled_e;
      return;
    } 
    if(s == "QueueUnsupported") {
      v = LolLobbyEligibilityRestrictionCode::QueueUnsupported_e;
      return;
    } 
    if(s == "TeamDivisionRestriction") {
      v = LolLobbyEligibilityRestrictionCode::TeamDivisionRestriction_e;
      return;
    } 
    if(s == "TeamHighMMRMaxSizeRestriction") {
      v = LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e;
      return;
    } 
    if(s == "TeamMaxSizeRestriction") {
      v = LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction_e;
      return;
    } 
    if(s == "TeamMinSizeRestriction") {
      v = LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction_e;
      return;
    } 
    if(s == "UnknownRestriction") {
      v = LolLobbyEligibilityRestrictionCode::UnknownRestriction_e;
      return;
    } 
  }
} 