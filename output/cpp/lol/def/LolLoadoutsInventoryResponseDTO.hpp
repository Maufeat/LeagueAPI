#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoadoutsInventoryDTO.hpp>
namespace lol {
  struct LolLoadoutsInventoryResponseDTO { 
    LolLoadoutsInventoryDTO data; 
  };
  inline void to_json(json& j, const LolLoadoutsInventoryResponseDTO& v) {
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolLoadoutsInventoryResponseDTO& v) {
    v.data = j.at("data").get<LolLoadoutsInventoryDTO>(); 
  }
}