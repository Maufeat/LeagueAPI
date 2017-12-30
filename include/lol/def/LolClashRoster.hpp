#pragma once
#include "../base_def.hpp" 
#include "RosterWithdraw.hpp"
#include "LolClashRosterPhaseInfo.hpp"
#include "RewardIcon.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "LolClashRosterMember.hpp"
namespace lol {
  struct LolClashRoster { 
    std::string name;
    int64_t tournamentId;
    std::string id;
    int32_t tier;
    bool eliminated;
    std::vector<LolClashRosterMember> members;
    int32_t losses;
    int32_t iconColorId;
    bool isCurrentBracketComplete;
    int32_t currentBracketWins;
    bool isRegistered;
    bool isActiveInCurrentPhase;
    RosterWithdraw withdraw;
    int32_t iconId;
    std::vector<LolClashRosterPhaseInfo> phaseInfos;
    std::vector<RewardIcon> availableIcons;
    std::string shortName;
    uint64_t captainSummonerId;
    int32_t numCompletedPeriods;
    int32_t wins;
    std::vector<LolClashSuggestedInvite> suggestedInvites; 
  };
  inline void to_json(json& j, const LolClashRoster& v) {
    j["name"] = v.name; 
    j["tournamentId"] = v.tournamentId; 
    j["id"] = v.id; 
    j["tier"] = v.tier; 
    j["eliminated"] = v.eliminated; 
    j["members"] = v.members; 
    j["losses"] = v.losses; 
    j["iconColorId"] = v.iconColorId; 
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete; 
    j["currentBracketWins"] = v.currentBracketWins; 
    j["isRegistered"] = v.isRegistered; 
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase; 
    j["withdraw"] = v.withdraw; 
    j["iconId"] = v.iconId; 
    j["phaseInfos"] = v.phaseInfos; 
    j["availableIcons"] = v.availableIcons; 
    j["shortName"] = v.shortName; 
    j["captainSummonerId"] = v.captainSummonerId; 
    j["numCompletedPeriods"] = v.numCompletedPeriods; 
    j["wins"] = v.wins; 
    j["suggestedInvites"] = v.suggestedInvites; 
  }
  inline void from_json(const json& j, LolClashRoster& v) {
    v.name = j.at("name").get<std::string>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.members = j.at("members").get<std::vector<LolClashRosterMember>>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>(); 
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo>>(); 
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon>>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>(); 
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite>>(); 
  }
}