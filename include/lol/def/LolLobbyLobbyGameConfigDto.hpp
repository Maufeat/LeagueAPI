#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace lol {
  struct LolLobbyLobbyGameConfigDto { 
    std::string customMutatorName;
    int32_t maxLobbySize;
    std::string customLobbyName;
    std::vector<std::string> customRewardsDisabledReasons;
    int32_t maxTeamSize;
    std::vector<LolLobbyLobbyParticipantDto> customTeam200;
    int32_t maxHumanPlayers;
    bool isLobbyFull;
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    std::string gameMutator;
    int32_t mapId;
    std::vector<int32_t> allowablePremadeSizes;
    std::string gameMode;
    int32_t queueId;
    std::string pickType;
    bool isCustom;
    bool isTeamBuilderManaged;
    std::vector<LolLobbyLobbyParticipantDto> customSpectators;
    std::vector<LolLobbyLobbyParticipantDto> customTeam100;
    bool showPositionSelector;
    bool premadeSizeAllowed; 
  };
  inline void to_json(json& j, const LolLobbyLobbyGameConfigDto& v) {
    j["customMutatorName"] = v.customMutatorName; 
    j["maxLobbySize"] = v.maxLobbySize; 
    j["customLobbyName"] = v.customLobbyName; 
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons; 
    j["maxTeamSize"] = v.maxTeamSize; 
    j["customTeam200"] = v.customTeam200; 
    j["maxHumanPlayers"] = v.maxHumanPlayers; 
    j["isLobbyFull"] = v.isLobbyFull; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["gameMutator"] = v.gameMutator; 
    j["mapId"] = v.mapId; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["gameMode"] = v.gameMode; 
    j["queueId"] = v.queueId; 
    j["pickType"] = v.pickType; 
    j["isCustom"] = v.isCustom; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["customSpectators"] = v.customSpectators; 
    j["customTeam100"] = v.customTeam100; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
  }
  inline void from_json(const json& j, LolLobbyLobbyGameConfigDto& v) {
    v.customMutatorName = j.at("customMutatorName").get<std::string>(); 
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>(); 
    v.customLobbyName = j.at("customLobbyName").get<std::string>(); 
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>(); 
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>(); 
    v.isLobbyFull = j.at("isLobbyFull").get<bool>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
  }
}