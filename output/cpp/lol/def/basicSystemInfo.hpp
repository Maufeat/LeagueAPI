#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/basicOperatingSystemInfo.hpp>
namespace lol {
  struct basicSystemInfo { 
    uint32_t physicalProcessorCores;
    uint32_t processorSpeed;
    uint64_t physicalMemory;
    basicOperatingSystemInfo operatingSystem; 
  };
  void to_json(json& j, const basicSystemInfo& v) {
  j["physicalProcessorCores"] = v.physicalProcessorCores; 
  j["processorSpeed"] = v.processorSpeed; 
  j["physicalMemory"] = v.physicalMemory; 
  j["operatingSystem"] = v.operatingSystem; 
  }
  void from_json(const json& j, basicSystemInfo& v) {
  v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>(); 
  v.processorSpeed = j.at("processorSpeed").get<uint32_t>(); 
  v.physicalMemory = j.at("physicalMemory").get<uint64_t>(); 
  v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo>(); 
  }
}