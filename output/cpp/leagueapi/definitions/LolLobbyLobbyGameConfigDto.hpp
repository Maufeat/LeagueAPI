#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyLobbyParticipantDto.hpp>
#include <leagueapi/definitions/LolLobbyQueueCustomGameSpectatorPolicy.hpp>

namespace leagueapi {
  struct LolLobbyLobbyGameConfigDto { /**/ 
    int32_t maxLobbySize;/**/
    std::string gameMutator;/**/
    bool showPositionSelector;/**/
    bool isCustom;/**/
    bool premadeSizeAllowed;/**/
    bool isTeamBuilderManaged;/**/
    std::vector<std::string> customRewardsDisabledReasons;/**/
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;/**/
    std::vector<LolLobbyLobbyParticipantDto> customTeam100;/**/
    std::string pickType;/**/
    std::vector<LolLobbyLobbyParticipantDto> customTeam200;/**/
    int32_t queueId;/**/
    std::string customMutatorName;/**/
    std::vector<LolLobbyLobbyParticipantDto> customSpectators;/**/
    int32_t maxTeamSize;/**/
    std::string customLobbyName;/**/
    bool isLobbyFull;/**/
    std::string gameMode;/**/
    int32_t mapId;/**/
    int32_t maxHumanPlayers;/**/
    std::vector<int32_t> allowablePremadeSizes;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyGameConfigDto& v) { 
    j["maxLobbySize"] = v.maxLobbySize;
    j["gameMutator"] = v.gameMutator;
    j["showPositionSelector"] = v.showPositionSelector;
    j["isCustom"] = v.isCustom;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["customTeam100"] = v.customTeam100;
    j["pickType"] = v.pickType;
    j["customTeam200"] = v.customTeam200;
    j["queueId"] = v.queueId;
    j["customMutatorName"] = v.customMutatorName;
    j["customSpectators"] = v.customSpectators;
    j["maxTeamSize"] = v.maxTeamSize;
    j["customLobbyName"] = v.customLobbyName;
    j["isLobbyFull"] = v.isLobbyFull;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["maxHumanPlayers"] = v.maxHumanPlayers;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
  }
  static void from_json(const json& j, LolLobbyLobbyGameConfigDto& v) { 
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.customMutatorName = j.at("customMutatorName").get<std::string>(); 
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>(); 
    v.customLobbyName = j.at("customLobbyName").get<std::string>(); 
    v.isLobbyFull = j.at("isLobbyFull").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
  }
} 