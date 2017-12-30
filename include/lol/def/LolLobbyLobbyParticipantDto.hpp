#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyParticipantDto { 
    std::string summonerName;
    bool allowedInviteOthers;
    bool ready;
    bool autoFillEligible;
    bool allowedChangeActivity;
    LolLobbyLobbyBotDifficulty botDifficulty;
    bool autoFillProtectedForStreaking;
    bool isLeader;
    int32_t teamId;
    std::string secondPositionPreference;
    bool showGhostedBanner;
    bool isBot;
    std::string firstPositionPreference;
    uint64_t summonerId;
    bool allowedKickOthers;
    bool isSpectator;
    std::string puuid;
    int32_t summonerIconId;
    bool autoFillProtectedForPromos;
    int32_t botChampionId;
    std::string botId;
    bool allowedStartActivity;
    bool allowedToggleInvite;
    bool autoFillProtectedForSoloing; 
  };
  inline void to_json(json& j, const LolLobbyLobbyParticipantDto& v) {
    j["summonerName"] = v.summonerName; 
    j["allowedInviteOthers"] = v.allowedInviteOthers; 
    j["ready"] = v.ready; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["allowedChangeActivity"] = v.allowedChangeActivity; 
    j["botDifficulty"] = v.botDifficulty; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["isLeader"] = v.isLeader; 
    j["teamId"] = v.teamId; 
    j["secondPositionPreference"] = v.secondPositionPreference; 
    j["showGhostedBanner"] = v.showGhostedBanner; 
    j["isBot"] = v.isBot; 
    j["firstPositionPreference"] = v.firstPositionPreference; 
    j["summonerId"] = v.summonerId; 
    j["allowedKickOthers"] = v.allowedKickOthers; 
    j["isSpectator"] = v.isSpectator; 
    j["puuid"] = v.puuid; 
    j["summonerIconId"] = v.summonerIconId; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["botChampionId"] = v.botChampionId; 
    j["botId"] = v.botId; 
    j["allowedStartActivity"] = v.allowedStartActivity; 
    j["allowedToggleInvite"] = v.allowedToggleInvite; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
  }
  inline void from_json(const json& j, LolLobbyLobbyParticipantDto& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>(); 
    v.ready = j.at("ready").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>(); 
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
    v.botId = j.at("botId").get<std::string>(); 
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>(); 
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
  }
}