#pragma once
#include "../base_def.hpp" 
#include "PlayerLootDTO.hpp"
namespace lol {
  struct PlayerLootResultDTO { 
    std::string status;
    std::string details;
    std::vector<PlayerLootDTO> added;
    std::vector<PlayerLootDTO> removed;
    std::vector<std::string> redeemed; 
  };
  inline void to_json(json& j, const PlayerLootResultDTO& v) {
    j["status"] = v.status; 
    j["details"] = v.details; 
    j["added"] = v.added; 
    j["removed"] = v.removed; 
    j["redeemed"] = v.redeemed; 
  }
  inline void from_json(const json& j, PlayerLootResultDTO& v) {
    v.status = j.at("status").get<std::string>(); 
    v.details = j.at("details").get<std::string>(); 
    v.added = j.at("added").get<std::vector<PlayerLootDTO>>(); 
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO>>(); 
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>(); 
  }
}