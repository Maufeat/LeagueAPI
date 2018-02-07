#pragma once
#include "../base_def.hpp" 
#include "basicOperatingSystemInfo.hpp"
namespace lol {
  struct basicSystemInfo { 
    basicOperatingSystemInfo operatingSystem;
    uint64_t physicalMemory;
    uint32_t physicalProcessorCores;
    uint32_t processorSpeed; 
  };
  inline void to_json(json& j, const basicSystemInfo& v) {
    j["operatingSystem"] = v.operatingSystem; 
    j["physicalMemory"] = v.physicalMemory; 
    j["physicalProcessorCores"] = v.physicalProcessorCores; 
    j["processorSpeed"] = v.processorSpeed; 
  }
  inline void from_json(const json& j, basicSystemInfo& v) {
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo>(); 
    v.physicalMemory = j.at("physicalMemory").get<uint64_t>(); 
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>(); 
    v.processorSpeed = j.at("processorSpeed").get<uint32_t>(); 
  }
}