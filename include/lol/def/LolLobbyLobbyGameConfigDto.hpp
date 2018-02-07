#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyParticipantDto.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolLobbyLobbyGameConfigDto { 
    std::string gameMode;
    std::string gameMutator;
    int32_t mapId;
    int32_t queueId;
    std::string pickType;
    int32_t maxTeamSize;
    int32_t maxLobbySize;
    int32_t maxHumanPlayers;
    std::vector<int32_t> allowablePremadeSizes;
    bool premadeSizeAllowed;
    bool isTeamBuilderManaged;
    bool isCustom;
    bool showPositionSelector;
    bool isLobbyFull;
    std::string customLobbyName;
    std::string customMutatorName;
    std::vector<LolLobbyLobbyParticipantDto> customTeam100;
    std::vector<LolLobbyLobbyParticipantDto> customTeam200;
    std::vector<LolLobbyLobbyParticipantDto> customSpectators;
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    std::vector<std::string> customRewardsDisabledReasons; 
  };
  inline void to_json(json& j, const LolLobbyLobbyGameConfigDto& v) {
    j["gameMode"] = v.gameMode; 
    j["gameMutator"] = v.gameMutator; 
    j["mapId"] = v.mapId; 
    j["queueId"] = v.queueId; 
    j["pickType"] = v.pickType; 
    j["maxTeamSize"] = v.maxTeamSize; 
    j["maxLobbySize"] = v.maxLobbySize; 
    j["maxHumanPlayers"] = v.maxHumanPlayers; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["isCustom"] = v.isCustom; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["isLobbyFull"] = v.isLobbyFull; 
    j["customLobbyName"] = v.customLobbyName; 
    j["customMutatorName"] = v.customMutatorName; 
    j["customTeam100"] = v.customTeam100; 
    j["customTeam200"] = v.customTeam200; 
    j["customSpectators"] = v.customSpectators; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons; 
  }
  inline void from_json(const json& j, LolLobbyLobbyGameConfigDto& v) {
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>(); 
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>(); 
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.isLobbyFull = j.at("isLobbyFull").get<bool>(); 
    v.customLobbyName = j.at("customLobbyName").get<std::string>(); 
    v.customMutatorName = j.at("customMutatorName").get<std::string>(); 
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>(); 
  }
}