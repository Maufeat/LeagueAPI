#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace lol {
  struct LolLobbyLobbyGameConfigDto { 
    int32_t queueId;
    std::vector<LolLobbyLobbyParticipantDto> customTeam200;
    std::string customLobbyName;
    bool premadeSizeAllowed;
    std::string pickType;
    int32_t maxHumanPlayers;
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    std::vector<std::string> customRewardsDisabledReasons;
    std::string gameMutator;
    std::vector<LolLobbyLobbyParticipantDto> customSpectators;
    std::string customMutatorName;
    bool isCustom;
    int32_t mapId;
    std::string gameMode;
    std::vector<LolLobbyLobbyParticipantDto> customTeam100;
    int32_t maxLobbySize;
    int32_t maxTeamSize;
    bool showPositionSelector;
    std::vector<int32_t> allowablePremadeSizes;
    bool isTeamBuilderManaged;
    bool isLobbyFull; 
  };
  inline void to_json(json& j, const LolLobbyLobbyGameConfigDto& v) {
    j["queueId"] = v.queueId; 
    j["customTeam200"] = v.customTeam200; 
    j["customLobbyName"] = v.customLobbyName; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["pickType"] = v.pickType; 
    j["maxHumanPlayers"] = v.maxHumanPlayers; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons; 
    j["gameMutator"] = v.gameMutator; 
    j["customSpectators"] = v.customSpectators; 
    j["customMutatorName"] = v.customMutatorName; 
    j["isCustom"] = v.isCustom; 
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["customTeam100"] = v.customTeam100; 
    j["maxLobbySize"] = v.maxLobbySize; 
    j["maxTeamSize"] = v.maxTeamSize; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["isLobbyFull"] = v.isLobbyFull; 
  }
  inline void from_json(const json& j, LolLobbyLobbyGameConfigDto& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customLobbyName = j.at("customLobbyName").get<std::string>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customMutatorName = j.at("customMutatorName").get<std::string>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>(); 
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.isLobbyFull = j.at("isLobbyFull").get<bool>(); 
  }
}