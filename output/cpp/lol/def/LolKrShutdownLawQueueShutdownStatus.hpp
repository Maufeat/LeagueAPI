#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolKrShutdownLawQueueShutdownStatus { 
    bool isDisabled; 
  };
  inline void to_json(json& j, const LolKrShutdownLawQueueShutdownStatus& v) {
    j["isDisabled"] = v.isDisabled; 
  }
  inline void from_json(const json& j, LolKrShutdownLawQueueShutdownStatus& v) {
    v.isDisabled = j.at("isDisabled").get<bool>(); 
  }
}