#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyBotDifficulty.hpp>
namespace lol {
  struct LolLobbyLobbyParticipantDto { 
    bool isSpectator;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    bool allowedInviteOthers;
    bool isBot;
    bool autoFillEligible;
    uint64_t summonerId;
    std::string puuid;
    int32_t summonerIconId;
    bool autoFillProtectedForSoloing;
    bool showGhostedBanner;
    std::string summonerName;
    bool allowedKickOthers;
    int32_t botChampionId;
    std::string secondPositionPreference;
    int32_t teamId;
    LolLobbyLobbyBotDifficulty botDifficulty;
    bool allowedStartActivity;
    std::string firstPositionPreference;
    bool allowedToggleInvite;
    bool allowedChangeActivity;
    std::string botId;
    bool isLeader;
    bool ready; 
  };
  void to_json(json& j, const LolLobbyLobbyParticipantDto& v) {
  j["isSpectator"] = v.isSpectator; 
  j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
  j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
  j["allowedInviteOthers"] = v.allowedInviteOthers; 
  j["isBot"] = v.isBot; 
  j["autoFillEligible"] = v.autoFillEligible; 
  j["summonerId"] = v.summonerId; 
  j["puuid"] = v.puuid; 
  j["summonerIconId"] = v.summonerIconId; 
  j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
  j["showGhostedBanner"] = v.showGhostedBanner; 
  j["summonerName"] = v.summonerName; 
  j["allowedKickOthers"] = v.allowedKickOthers; 
  j["botChampionId"] = v.botChampionId; 
  j["secondPositionPreference"] = v.secondPositionPreference; 
  j["teamId"] = v.teamId; 
  j["botDifficulty"] = v.botDifficulty; 
  j["allowedStartActivity"] = v.allowedStartActivity; 
  j["firstPositionPreference"] = v.firstPositionPreference; 
  j["allowedToggleInvite"] = v.allowedToggleInvite; 
  j["allowedChangeActivity"] = v.allowedChangeActivity; 
  j["botId"] = v.botId; 
  j["isLeader"] = v.isLeader; 
  j["ready"] = v.ready; 
  }
  void from_json(const json& j, LolLobbyLobbyParticipantDto& v) {
  v.isSpectator = j.at("isSpectator").get<bool>(); 
  v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
  v.allowedInviteOthers = j.at("allowedInviteOthers").get<bool>(); 
  v.isBot = j.at("isBot").get<bool>(); 
  v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
  v.showGhostedBanner = j.at("showGhostedBanner").get<bool>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.allowedKickOthers = j.at("allowedKickOthers").get<bool>(); 
  v.botChampionId = j.at("botChampionId").get<int32_t>(); 
  v.secondPositionPreference = j.at("secondPositionPreference").get<std::string>(); 
  v.teamId = j.at("teamId").get<int32_t>(); 
  v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
  v.allowedStartActivity = j.at("allowedStartActivity").get<bool>(); 
  v.firstPositionPreference = j.at("firstPositionPreference").get<std::string>(); 
  v.allowedToggleInvite = j.at("allowedToggleInvite").get<bool>(); 
  v.allowedChangeActivity = j.at("allowedChangeActivity").get<bool>(); 
  v.botId = j.at("botId").get<std::string>(); 
  v.isLeader = j.at("isLeader").get<bool>(); 
  v.ready = j.at("ready").get<bool>(); 
  }
}