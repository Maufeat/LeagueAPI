#pragma once
#include "../base_def.hpp" 
#include "PlayerInfoDto.hpp"
namespace lol {
  struct MemberSinceDto { 
    PlayerInfoDto playerInfo;
    std::string role;
    int64_t since; 
  };
  inline void to_json(json& j, const MemberSinceDto& v) {
    j["playerInfo"] = v.playerInfo; 
    j["role"] = v.role; 
    j["since"] = v.since; 
  }
  inline void from_json(const json& j, MemberSinceDto& v) {
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto>(); 
    v.role = j.at("role").get<std::string>(); 
    v.since = j.at("since").get<int64_t>(); 
  }
}