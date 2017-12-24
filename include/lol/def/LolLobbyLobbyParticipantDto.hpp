#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyParticipantDto { 
    bool ready;
    bool allowedKickOthers;
    bool allowedToggleInvite;
    bool allowedStartActivity;
    bool allowedChangeActivity;
    std::string botId;
    bool isBot;
    bool isLeader;
    std::string secondPositionPreference;
    int32_t summonerIconId;
    std::string summonerName;
    bool autoFillProtectedForStreaking;
    bool allowedInviteOthers;
    uint64_t summonerId;
    std::string puuid;
    bool autoFillProtectedForSoloing;
    bool isSpectator;
    std::string firstPositionPreference;
    bool autoFillProtectedForPromos;
    bool showGhostedBanner;
    int32_t botChampionId;
    bool autoFillEligible;
    LolLobbyLobbyBotDifficulty botDifficulty;
    int32_t teamId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyParticipantDto& v) {
    j["ready"] = v.ready; 
    j["allowedKickOthers"] = v.allowedKickOthers; 
    j["allowedToggleInvite"] = v.allowedToggleInvite; 
    j["allowedStartActivity"] = v.allowedStartActivity; 
    j["allowedChangeActivity"] = v.allowedChangeActivity; 
    j["botId"] = v.botId; 
    j["isBot"] = v.isBot; 
    j["isLeader"] = v.isLeader; 
    j["secondPositionPreference"] = v.secondPositionPreference; 
    j["summonerIconId"] = v.summonerIconId; 
    j["summonerName"] = v.summonerName; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["allowedInviteOthers"] = v.allowedInviteOthers; 
    j["summonerId"] = v.summonerId; 
    j["puuid"] = v.puuid; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["isSpectator"] = v.isSpectator; 
    j["firstPositionPreference"] = v.firstPositionPreference; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["showGhostedBanner"] = v.showGhostedBanner; 
    j["botChampionId"] = v.botChampionId; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["botDifficulty"] = v.botDifficulty; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyParticipantDto& v) {
    v.ready = j.at("ready").get<bool>(); 
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>(); 
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>(); 
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>(); 
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>(); 
    v.botId = j.at("botId").get<std::string>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
  }
}