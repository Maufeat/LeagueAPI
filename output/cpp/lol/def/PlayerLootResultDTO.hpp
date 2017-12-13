#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PlayerLootDTO.hpp>
namespace lol {
  struct PlayerLootResultDTO { 
    std::string details;
    std::vector<PlayerLootDTO> added;
    std::string status;
    std::vector<std::string> redeemed;
    std::vector<PlayerLootDTO> removed; 
  };
  void to_json(json& j, const PlayerLootResultDTO& v) {
    j["details"] = v.details; 
    j["added"] = v.added; 
    j["status"] = v.status; 
    j["redeemed"] = v.redeemed; 
    j["removed"] = v.removed; 
  }
  void from_json(const json& j, PlayerLootResultDTO& v) {
    v.details = j.at("details").get<std::string>(); 
    v.added = j.at("added").get<std::vector<PlayerLootDTO>>(); 
    v.status = j.at("status").get<std::string>(); 
    v.redeemed = j.at("redeemed").get<std::vector<std::string>>(); 
    v.removed = j.at("removed").get<std::vector<PlayerLootDTO>>(); 
  }
}