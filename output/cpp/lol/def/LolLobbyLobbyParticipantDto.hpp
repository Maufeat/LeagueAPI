#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyBotDifficulty.hpp>
namespace lol {
  struct LolLobbyLobbyParticipantDto { 
    bool allowedKickOthers;
    std::string botId;
    bool ready;
    bool isBot;
    int32_t botChampionId;
    std::string puuid;
    bool allowedInviteOthers;
    std::string summonerName;
    std::string secondPositionPreference;
    std::string firstPositionPreference;
    LolLobbyLobbyBotDifficulty botDifficulty;
    bool isSpectator;
    bool autoFillProtectedForSoloing;
    bool showGhostedBanner;
    bool autoFillProtectedForPromos;
    bool autoFillEligible;
    bool allowedStartActivity;
    bool allowedToggleInvite;
    bool isLeader;
    bool autoFillProtectedForStreaking;
    int32_t summonerIconId;
    bool allowedChangeActivity;
    int32_t teamId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyParticipantDto& v) {
    j["allowedKickOthers"] = v.allowedKickOthers; 
    j["botId"] = v.botId; 
    j["ready"] = v.ready; 
    j["isBot"] = v.isBot; 
    j["botChampionId"] = v.botChampionId; 
    j["puuid"] = v.puuid; 
    j["allowedInviteOthers"] = v.allowedInviteOthers; 
    j["summonerName"] = v.summonerName; 
    j["secondPositionPreference"] = v.secondPositionPreference; 
    j["firstPositionPreference"] = v.firstPositionPreference; 
    j["botDifficulty"] = v.botDifficulty; 
    j["isSpectator"] = v.isSpectator; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["showGhostedBanner"] = v.showGhostedBanner; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["allowedStartActivity"] = v.allowedStartActivity; 
    j["allowedToggleInvite"] = v.allowedToggleInvite; 
    j["isLeader"] = v.isLeader; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["summonerIconId"] = v.summonerIconId; 
    j["allowedChangeActivity"] = v.allowedChangeActivity; 
    j["teamId"] = v.teamId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyParticipantDto& v) {
    v.allowedKickOthers = j.at("allowedKickOthers").get<bool>(); 
    v.botId = j.at("botId").get<std::string>(); 
    v.ready = j.at("ready").get<bool>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>(); 
    v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.showGhostedBanner = j.at("showGhostedBanner").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.allowedStartActivity = j.at("allowedStartActivity").get<bool>(); 
    v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}