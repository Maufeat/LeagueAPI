#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashSuggestedInvite.hpp>
#include <lol/def/LolClashRosterMember.hpp>
#include <lol/def/LolClashRosterPhaseInfo.hpp>
#include <lol/def/RewardIcon.hpp>
#include <lol/def/RosterWithdraw.hpp>
namespace lol {
  struct LolClashRoster { 
    uint64_t captainSummonerId;
    int32_t currentBracketWins;
    int32_t wins;
    int32_t tier;
    std::vector<LolClashRosterPhaseInfo> phaseInfos;
    int32_t iconId;
    std::string name;
    std::string shortName;
    std::vector<LolClashRosterMember> members;
    std::string id;
    int32_t iconColorId;
    int64_t tournamentId;
    bool isActiveInCurrentPhase;
    bool eliminated;
    RosterWithdraw withdraw;
    int32_t losses;
    std::vector<RewardIcon> availableIcons;
    bool isCurrentBracketComplete;
    std::vector<LolClashSuggestedInvite> suggestedInvites;
    int32_t numCompletedPeriods;
    bool isRegistered; 
  };
  void to_json(json& j, const LolClashRoster& v) {
    j["captainSummonerId"] = v.captainSummonerId; 
    j["currentBracketWins"] = v.currentBracketWins; 
    j["wins"] = v.wins; 
    j["tier"] = v.tier; 
    j["phaseInfos"] = v.phaseInfos; 
    j["iconId"] = v.iconId; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["members"] = v.members; 
    j["id"] = v.id; 
    j["iconColorId"] = v.iconColorId; 
    j["tournamentId"] = v.tournamentId; 
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase; 
    j["eliminated"] = v.eliminated; 
    j["withdraw"] = v.withdraw; 
    j["losses"] = v.losses; 
    j["availableIcons"] = v.availableIcons; 
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete; 
    j["suggestedInvites"] = v.suggestedInvites; 
    j["numCompletedPeriods"] = v.numCompletedPeriods; 
    j["isRegistered"] = v.isRegistered; 
  }
  void from_json(const json& j, LolClashRoster& v) {
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>(); 
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo>>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.members = j.at("members").get<std::vector<LolClashRosterMember>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon>>(); 
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>(); 
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite>>(); 
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
  }
}