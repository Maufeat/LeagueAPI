#pragma once
#include "../base_def.hpp" 
#include "PlayerInfoDto.hpp"
namespace lol {
  struct MemberSinceDto { 
    PlayerInfoDto playerInfo;
    int64_t since;
    std::string role; 
  };
  inline void to_json(json& j, const MemberSinceDto& v) {
    j["playerInfo"] = v.playerInfo; 
    j["since"] = v.since; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, MemberSinceDto& v) {
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto>(); 
    v.since = j.at("since").get<int64_t>(); 
    v.role = j.at("role").get<std::string>(); 
  }
}