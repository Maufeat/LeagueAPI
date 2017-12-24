#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterPhaseInfo.hpp"
#include "LolClashRosterMember.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "RewardIcon.hpp"
namespace lol {
  struct LolClashRoster { 
    uint64_t captainSummonerId;
    int64_t tournamentId;
    int32_t numCompletedPeriods;
    int32_t iconId;
    std::vector<RewardIcon> availableIcons;
    std::string name;
    bool isRegistered;
    bool isActiveInCurrentPhase;
    std::vector<LolClashRosterMember> members;
    int32_t wins;
    int32_t iconColorId;
    std::vector<LolClashRosterPhaseInfo> phaseInfos;
    std::string shortName;
    RosterWithdraw withdraw;
    std::string id;
    bool eliminated;
    int32_t losses;
    bool isCurrentBracketComplete;
    std::vector<LolClashSuggestedInvite> suggestedInvites;
    int32_t currentBracketWins;
    int32_t tier; 
  };
  inline void to_json(json& j, const LolClashRoster& v) {
    j["captainSummonerId"] = v.captainSummonerId; 
    j["tournamentId"] = v.tournamentId; 
    j["numCompletedPeriods"] = v.numCompletedPeriods; 
    j["iconId"] = v.iconId; 
    j["availableIcons"] = v.availableIcons; 
    j["name"] = v.name; 
    j["isRegistered"] = v.isRegistered; 
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase; 
    j["members"] = v.members; 
    j["wins"] = v.wins; 
    j["iconColorId"] = v.iconColorId; 
    j["phaseInfos"] = v.phaseInfos; 
    j["shortName"] = v.shortName; 
    j["withdraw"] = v.withdraw; 
    j["id"] = v.id; 
    j["eliminated"] = v.eliminated; 
    j["losses"] = v.losses; 
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete; 
    j["suggestedInvites"] = v.suggestedInvites; 
    j["currentBracketWins"] = v.currentBracketWins; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, LolClashRoster& v) {
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>(); 
    v.members = j.at("members").get<std::vector<LolClashRosterMember>>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo>>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.id = j.at("id").get<std::string>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>(); 
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite>>(); 
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
  }
}