#pragma once
#include "../base_def.hpp" 
#include "basicOperatingSystemInfo.hpp"
namespace lol {
  struct basicSystemInfo { 
    uint32_t processorSpeed;
    uint32_t physicalProcessorCores;
    basicOperatingSystemInfo operatingSystem;
    uint64_t physicalMemory; 
  };
  inline void to_json(json& j, const basicSystemInfo& v) {
    j["processorSpeed"] = v.processorSpeed; 
    j["physicalProcessorCores"] = v.physicalProcessorCores; 
    j["operatingSystem"] = v.operatingSystem; 
    j["physicalMemory"] = v.physicalMemory; 
  }
  inline void from_json(const json& j, basicSystemInfo& v) {
    v.processorSpeed = j.at("processorSpeed").get<uint32_t>(); 
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>(); 
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo>(); 
    v.physicalMemory = j.at("physicalMemory").get<uint64_t>(); 
  }
}