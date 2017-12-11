#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/RosterWithdraw.hpp>"
#include "<leagueapi/definitions/RewardIcon.hpp>"
#include "<leagueapi/definitions/LolClashRosterMember.hpp>"
#include "<leagueapi/definitions/LolClashSuggestedInvite.hpp>"
#include "<leagueapi/definitions/LolClashRosterPhaseInfo.hpp>"

namespace leagueapi {
  struct LolClashRoster { /**/ 
    bool isCurrentBracketComplete;/**/
    int32_t tier;/**/
    std::string shortName;/**/
    int32_t iconId;/**/
    int32_t currentBracketWins;/**/
    std::string name;/**/
    bool isRegistered;/**/
    int32_t wins;/**/
    int32_t iconColorId;/**/
    std::vector<RewardIcon> availableIcons;/**/
    std::vector<LolClashRosterPhaseInfo> phaseInfos;/**/
    bool isActiveInCurrentPhase;/**/
    int32_t losses;/**/
    bool eliminated;/**/
    int64_t tournamentId;/**/
    int32_t numCompletedPeriods;/**/
    std::vector<LolClashSuggestedInvite> suggestedInvites;/**/
    uint64_t captainSummonerId;/**/
    std::vector<LolClashRosterMember> members;/**/
    RosterWithdraw withdraw;/**/
    std::string id;/**/
  };
  static void to_json(json& j, const LolClashRoster& v) { 
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
    j["tier"] = v.tier;
    j["shortName"] = v.shortName;
    j["iconId"] = v.iconId;
    j["currentBracketWins"] = v.currentBracketWins;
    j["name"] = v.name;
    j["isRegistered"] = v.isRegistered;
    j["wins"] = v.wins;
    j["iconColorId"] = v.iconColorId;
    j["availableIcons"] = v.availableIcons;
    j["phaseInfos"] = v.phaseInfos;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
    j["losses"] = v.losses;
    j["eliminated"] = v.eliminated;
    j["tournamentId"] = v.tournamentId;
    j["numCompletedPeriods"] = v.numCompletedPeriods;
    j["suggestedInvites"] = v.suggestedInvites;
    j["captainSummonerId"] = v.captainSummonerId;
    j["members"] = v.members;
    j["withdraw"] = v.withdraw;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolClashRoster& v) { 
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon>>(); 
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo>>(); 
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>(); 
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite>>(); 
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>(); 
    v.members = j.at("members").get<std::vector<LolClashRosterMember>>(); 
    v.withdraw = j.at("withdraw").get<RosterWithdraw>(); 
    v.id = j.at("id").get<std::string>(); 
  }
} 