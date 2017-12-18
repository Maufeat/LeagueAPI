#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LoginDataPacket { 
    uint64_t timeUntilFirstWinOfDay; 
  };
  inline void to_json(json& j, const LoginDataPacket& v) {
    j["timeUntilFirstWinOfDay"] = v.timeUntilFirstWinOfDay; 
  }
  inline void from_json(const json& j, LoginDataPacket& v) {
    v.timeUntilFirstWinOfDay = j.at("timeUntilFirstWinOfDay").get<uint64_t>(); 
  }
}