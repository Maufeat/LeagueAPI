#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyParticipantDto { 
    uint64_t summonerId;
    int32_t summonerIconId;
    std::string summonerName;
    std::string summonerInternalName;
    std::string puuid;
    uint32_t summonerLevel;
    std::string lastSeasonHighestRank;
    bool allowedStartActivity;
    bool allowedChangeActivity;
    bool allowedToggleInvite;
    bool allowedKickOthers;
    bool allowedInviteOthers;
    bool isLeader;
    bool isSpectator;
    int32_t teamId;
    std::string firstPositionPreference;
    std::string secondPositionPreference;
    bool ready;
    bool showGhostedBanner;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    bool isBot;
    std::string botId;
    LolLobbyLobbyBotDifficulty botDifficulty;
    int32_t botChampionId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyParticipantDto& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerIconId"] = v.summonerIconId; 
    j["summonerName"] = v.summonerName; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["puuid"] = v.puuid; 
    j["summonerLevel"] = v.summonerLevel; 
    j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
    j["allowedStartActivity"] = v.allowedStartActivity; 
    j["allowedChangeActivity"] = v.allowedChangeActivity; 
    j["allowedToggleInvite"] = v.allowedToggleInvite; 
    j["allowedKickOthers"] = v.allowedKickOthers; 
    j["allowedInviteOthers"] = v.allowedInviteOthers; 
    j["isLeader"] = v.isLeader; 
    j["isSpectator"] = v.isSpectator; 
    j["teamId"] = v.teamId; 
    j["firstPositionPreference"] = v.firstPositionPreference; 
    j["secondPositionPreference"] = v.secondPositionPreference; 
    j["ready"] = v.ready; 
    j["showGhostedBanner"] = v.showGhostedBanner; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["isBot"] = v.isBot; 
    j["botId"] = v.botId; 
    j["botDifficulty"] = v.botDifficulty; 
    j["botChampionId"] = v.botChampionId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyParticipantDto& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>(); 
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>(); 
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>(); 
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>(); 
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>(); 
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>(); 
    v.ready = j.at("ready").get<bool>(); 
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.botId = j.at("botId").get<std::string>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
  }
}