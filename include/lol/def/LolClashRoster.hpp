#pragma once
#include "../base_def.hpp" 
#include "RewardIcon.hpp"
#include "LolClashRosterPhaseInfo.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashRosterMember.hpp"
namespace lol {
  struct LolClashRoster { 
    int64_t tournamentId;
    std::string id;
    std::string name;
    std::string shortName;
    int32_t iconId;
    int32_t iconColorId;
    std::vector<RewardIcon> availableIcons;
    uint64_t captainSummonerId;
    std::vector<LolClashRosterMember> members;
    std::vector<LolClashSuggestedInvite> suggestedInvites;
    std::vector<LolClashRosterPhaseInfo> phaseInfos;
    int32_t tier;
    int32_t wins;
    int32_t losses;
    int32_t currentBracketWins;
    int32_t numCompletedPeriods;
    bool eliminated;
    bool isRegistered;
    bool isActiveInCurrentPhase;
    bool isCurrentBracketComplete;
    RosterWithdraw withdraw; 
  };
  inline void to_json(json& j, const LolClashRoster& v) {
    j["tournamentId"] = v.tournamentId; 
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["iconId"] = v.iconId; 
    j["iconColorId"] = v.iconColorId; 
    j["availableIcons"] = v.availableIcons; 
    j["captainSummonerId"] = v.captainSummonerId; 
    j["members"] = v.members; 
    j["suggestedInvites"] = v.suggestedInvites; 
    j["phaseInfos"] = v.phaseInfos; 
    j["tier"] = v.tier; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["currentBracketWins"] = v.currentBracketWins; 
    j["numCompletedPeriods"] = v.numCompletedPeriods; 
    j["eliminated"] = v.eliminated; 
    j["isRegistered"] = v.isRegistered; 
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase; 
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete; 
    j["withdraw"] = v.withdraw; 
  }
  inline void from_json(const json& j, LolClashRoster& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon>>(); 
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>(); 
    v.members = j.at("members").get<std::vector<LolClashRosterMember>>(); 
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite>>(); 
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo>>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>(); 
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>(); 
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
  }
}