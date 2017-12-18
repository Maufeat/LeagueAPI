#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyLobbyParticipantDto.hpp"
namespace lol {
  struct LolLobbyLobbyGameConfigDto { 
    std::string gameMutator;
    int32_t maxHumanPlayers;
    std::vector<int32_t> allowablePremadeSizes;
    int32_t mapId;
    std::string customLobbyName;
    int32_t maxLobbySize;
    std::string gameMode;
    std::string pickType;
    int32_t queueId;
    std::string customMutatorName;
    LolLobbyQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool isCustom;
    std::vector<LolLobbyLobbyParticipantDto> customTeam200;
    std::vector<LolLobbyLobbyParticipantDto> customTeam100;
    bool isLobbyFull;
    std::vector<LolLobbyLobbyParticipantDto> customSpectators;
    std::vector<std::string> customRewardsDisabledReasons;
    int32_t maxTeamSize;
    bool isTeamBuilderManaged;
    bool premadeSizeAllowed;
    bool showPositionSelector; 
  };
  inline void to_json(json& j, const LolLobbyLobbyGameConfigDto& v) {
    j["gameMutator"] = v.gameMutator; 
    j["maxHumanPlayers"] = v.maxHumanPlayers; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["mapId"] = v.mapId; 
    j["customLobbyName"] = v.customLobbyName; 
    j["maxLobbySize"] = v.maxLobbySize; 
    j["gameMode"] = v.gameMode; 
    j["pickType"] = v.pickType; 
    j["queueId"] = v.queueId; 
    j["customMutatorName"] = v.customMutatorName; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["isCustom"] = v.isCustom; 
    j["customTeam200"] = v.customTeam200; 
    j["customTeam100"] = v.customTeam100; 
    j["isLobbyFull"] = v.isLobbyFull; 
    j["customSpectators"] = v.customSpectators; 
    j["customRewardsDisabledReasons"] = v.customRewardsDisabledReasons; 
    j["maxTeamSize"] = v.maxTeamSize; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["showPositionSelector"] = v.showPositionSelector; 
  }
  inline void from_json(const json& j, LolLobbyLobbyGameConfigDto& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.maxHumanPlayers = j.at("maxHumanPlayers").get<int32_t>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.customLobbyName = j.at("customLobbyName").get<std::string>(); 
    v.maxLobbySize = j.at("maxLobbySize").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.customMutatorName = j.at("customMutatorName").get<std::string>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.customTeam200 = j.at("customTeam200").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customTeam100 = j.at("customTeam100").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.isLobbyFull = j.at("isLobbyFull").get<bool>(); 
    v.customSpectators = j.at("customSpectators").get<std::vector<LolLobbyLobbyParticipantDto>>(); 
    v.customRewardsDisabledReasons = j.at("customRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.maxTeamSize = j.at("maxTeamSize").get<int32_t>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
  }
}