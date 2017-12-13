#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLcdsGameMetaData { 
    uint64_t gameId;
    int32_t mapId; 
  };
  void to_json(json& j, const LolLobbyLcdsGameMetaData& v) {
  j["gameId"] = v.gameId; 
  j["mapId"] = v.mapId; 
  }
  void from_json(const json& j, LolLobbyLcdsGameMetaData& v) {
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.mapId = j.at("mapId").get<int32_t>(); 
  }
}