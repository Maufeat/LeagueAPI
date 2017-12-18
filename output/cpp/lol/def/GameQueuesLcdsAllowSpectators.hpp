#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct GameQueuesLcdsAllowSpectators {  
    ALL_e = 3,
    DROPINONLY_e = 2,
    LOBBYONLY_e = 1,
    NONE_e = 0,
  };
  inline void to_json(json& j, const GameQueuesLcdsAllowSpectators& v) {
    if(v == GameQueuesLcdsAllowSpectators::ALL_e) {
      j = "ALL";
      return;
    }
    if(v == GameQueuesLcdsAllowSpectators::DROPINONLY_e) {
      j = "DROPINONLY";
      return;
    }
    if(v == GameQueuesLcdsAllowSpectators::LOBBYONLY_e) {
      j = "LOBBYONLY";
      return;
    }
    if(v == GameQueuesLcdsAllowSpectators::NONE_e) {
      j = "NONE";
      return;
    }
  }
  inline void from_json(const json& j, GameQueuesLcdsAllowSpectators& v) {
    if(j.get<std::string>() == "ALL") {
      v = GameQueuesLcdsAllowSpectators::ALL_e;
      return;
    } 
    if(j.get<std::string>() == "DROPINONLY") {
      v = GameQueuesLcdsAllowSpectators::DROPINONLY_e;
      return;
    } 
    if(j.get<std::string>() == "LOBBYONLY") {
      v = GameQueuesLcdsAllowSpectators::LOBBYONLY_e;
      return;
    } 
    if(j.get<std::string>() == "NONE") {
      v = GameQueuesLcdsAllowSpectators::NONE_e;
      return;
    } 
  }
}