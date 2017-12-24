#pragma once
#include "../base_def.hpp" 
#include "PlayerLootDTO.hpp"
namespace lol {
  struct PlayerLootResultDTO { 
    std::vector<PlayerLootDTO> removed;
    std::vector<std::string> redeemed;
    std::string status;
    std::vector<PlayerLootDTO> added;
    std::string details; 
  };
  inline void to_json(json& j, const PlayerLootResultDTO& v) {
    j["removed"] = v.removed; 
    j["redeemed"] = v.redeemed; 
    j["status"] = v.status; 
    j["added"] = v.added; 
    j["details"] = v.details; 
  }
  inline void from_json(const json& j, PlayerLootResultDTO& v) {
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO>>(); 
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>(); 
    v.status = j.at("status").get<std::string>(); 
    v.added = j.at("added").get<std::vector<PlayerLootDTO>>(); 
    v.details = j.at("details").get<std::string>(); 
  }
}