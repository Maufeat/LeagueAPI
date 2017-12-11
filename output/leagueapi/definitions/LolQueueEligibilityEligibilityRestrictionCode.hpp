#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolQueueEligibilityEligibilityRestrictionCode { /**/ 
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
  static void to_json(json& j, const LolQueueEligibilityEligibilityRestrictionCode& v) {
    switch(v) { 
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e:
      j = "PlayerAvailableChampionRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerBannedRestriction_e:
      j = "PlayerBannedRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerBingeRestriction_e:
      j = "PlayerBingeRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerDodgeRestriction_e:
      j = "PlayerDodgeRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerInGameRestriction_e:
      j = "PlayerInGameRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e:
      j = "PlayerLeaverBustedRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e:
      j = "PlayerLeaverTaintedWarningRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerLevelRestriction_e:
      j = "PlayerLevelRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerMaxLevelRestriction_e:
      j = "PlayerMaxLevelRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerMinLevelRestriction_e:
      j = "PlayerMinLevelRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerMinorRestriction_e:
      j = "PlayerMinorRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e:
      j = "PlayerRankedSuspensionRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PlayerTimedRestriction_e:
      j = "PlayerTimedRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e:
      j = "PrerequisiteQueuesNotPlayedRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::QueueDisabled_e:
      j = "QueueDisabled";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::QueueUnsupported_e:
      j = "QueueUnsupported";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::TeamDivisionRestriction_e:
      j = "TeamDivisionRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e:
      j = "TeamHighMMRMaxSizeRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::TeamMaxSizeRestriction_e:
      j = "TeamMaxSizeRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::TeamMinSizeRestriction_e:
      j = "TeamMinSizeRestriction";
    break;
    case LolQueueEligibilityEligibilityRestrictionCode::UnknownRestriction_e:
      j = "UnknownRestriction";
    break;
    };
  }
  static void from_json(const json& j, LolQueueEligibilityEligibilityRestrictionCode& v) {
    auto s = j.get<std::string>(); 
    if(s == "PlayerAvailableChampionRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerAvailableChampionRestriction_e;
      return;
    } 
    if(s == "PlayerBannedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerBannedRestriction_e;
      return;
    } 
    if(s == "PlayerBingeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerBingeRestriction_e;
      return;
    } 
    if(s == "PlayerDodgeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerDodgeRestriction_e;
      return;
    } 
    if(s == "PlayerInGameRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerInGameRestriction_e;
      return;
    } 
    if(s == "PlayerLeaverBustedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverBustedRestriction_e;
      return;
    } 
    if(s == "PlayerLeaverTaintedWarningRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction_e;
      return;
    } 
    if(s == "PlayerLevelRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLevelRestriction_e;
      return;
    } 
    if(s == "PlayerMaxLevelRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMaxLevelRestriction_e;
      return;
    } 
    if(s == "PlayerMinLevelRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMinLevelRestriction_e;
      return;
    } 
    if(s == "PlayerMinorRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMinorRestriction_e;
      return;
    } 
    if(s == "PlayerRankedSuspensionRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerRankedSuspensionRestriction_e;
      return;
    } 
    if(s == "PlayerTimedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerTimedRestriction_e;
      return;
    } 
    if(s == "PrerequisiteQueuesNotPlayedRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction_e;
      return;
    } 
    if(s == "QueueDisabled") {
      v = LolQueueEligibilityEligibilityRestrictionCode::QueueDisabled_e;
      return;
    } 
    if(s == "QueueUnsupported") {
      v = LolQueueEligibilityEligibilityRestrictionCode::QueueUnsupported_e;
      return;
    } 
    if(s == "TeamDivisionRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamDivisionRestriction_e;
      return;
    } 
    if(s == "TeamHighMMRMaxSizeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction_e;
      return;
    } 
    if(s == "TeamMaxSizeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamMaxSizeRestriction_e;
      return;
    } 
    if(s == "TeamMinSizeRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamMinSizeRestriction_e;
      return;
    } 
    if(s == "UnknownRestriction") {
      v = LolQueueEligibilityEligibilityRestrictionCode::UnknownRestriction_e;
      return;
    } 
  }
} 