#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyPositionPreferences.hpp>
#include <lol/def/LolLobbyLobbyBotDifficulty.hpp>
namespace lol {
  struct LolLobbyLobbyMember { 
    bool isSpectator;
    LolLobbyLobbyPositionPreferences positionPreferences;
    bool autoFillProtectedForPromos;
    bool isBot;
    std::string summonerInternalName;
    uint64_t id;
    bool canInviteOthers;
    bool isOwner;
    std::optional<std::string> excludedPositionPreference;
    bool showPositionExcluder;
    int32_t botChampionId;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    LolLobbyLobbyBotDifficulty botDifficulty; 
  };
  void to_json(json& j, const LolLobbyLobbyMember& v) {
    j["isSpectator"] = v.isSpectator; 
    j["positionPreferences"] = v.positionPreferences; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["isBot"] = v.isBot; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["id"] = v.id; 
    j["canInviteOthers"] = v.canInviteOthers; 
    j["isOwner"] = v.isOwner; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["botChampionId"] = v.botChampionId; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["botDifficulty"] = v.botDifficulty; 
  }
  void from_json(const json& j, LolLobbyLobbyMember& v) {
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
  }
}