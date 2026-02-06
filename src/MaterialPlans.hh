#pragma once

#include <array>
#include <cstdint>

struct MatPlan {
  std::array<uint8_t, 7> mat_usage;
};

inline const MatPlan* get_ta_matplan(uint8_t class_id) {
  // POWER, MIND, EVADE, DEF, LUCK, HP, TP
  static const MatPlan humar     = {{73, 52, 28, 69, 28, 125, 125}};
  static const MatPlan hunewearl = {{99, 23,  0,  0, 28, 125, 125}};
  static const MatPlan hucast    = {{112, 0,  0,  0, 38, 125,   0}};
  static const MatPlan hucaseal  = {{62,  0,  7, 53, 28, 125,   0}};
  static const MatPlan ramar     = {{60, 63, 31, 68, 28, 125, 125}};
  static const MatPlan ramarl    = {{45, 132, 0, 45, 28, 125, 125}};
  static const MatPlan racast    = {{90,  0,  0, 32, 28, 125,   0}};
  static const MatPlan racaseal  = {{41,  0, 28, 53, 28, 125,   0}};
  static const MatPlan fomar     = {{0,  133, 14, 65, 38, 125, 125}};
  static const MatPlan fomarl    = {{24,  86, 38, 64, 38, 125, 125}};
  static const MatPlan fonewm    = {{0,  140,  0,  0, 10, 125, 125}};
  static const MatPlan fonewearl = {{0,  148,  0,  2,  0, 125, 125}};

  switch (class_id) {
    case 0:  return &humar;
    case 1:  return &hunewearl;
    case 2:  return &hucast;
    case 3:  return &hucaseal;
    case 4:  return &ramar;
    case 5: return &ramarl;
    case 6:  return &racast;
    case 7:  return &racaseal;
    case 8: return &fomar;
    case 9:  return &fomarl;
    case 10:  return &fonewm;
    case 11:  return &fonewearl;
    default:
      return nullptr;
  }
}

struct HunterGear {
  uint64_t primary;
  uint64_t secondary;
};

inline constexpr HunterGear Hunter[] = {
  {0x009D000000000364ULL, 0x0464056400000000ULL},
  {0x0043010916000164ULL, 0x0264046400000000ULL},
};