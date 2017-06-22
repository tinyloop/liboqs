#include "params.h"

uint16_t zarzar_bitrev_table[1024] = {
    0, 256, 128, 384, 64, 320, 192, 448, 32, 288, 160, 416, 96, 352, 224, 480,
    16, 272, 144, 400, 80, 336, 208, 464, 48, 304, 176, 432, 112, 368, 240, 496,
    8, 264, 136, 392, 72, 328, 200, 456, 40, 296, 168, 424, 104, 360, 232, 488,
    24, 280, 152, 408, 88, 344, 216, 472, 56, 312, 184, 440, 120, 376, 248, 504,
    4, 260, 132, 388, 68, 324, 196, 452, 36, 292, 164, 420, 100, 356, 228, 484,
    20, 276, 148, 404, 84, 340, 212, 468, 52, 308, 180, 436, 116, 372, 244, 500,
    12, 268, 140, 396, 76, 332, 204, 460, 44, 300, 172, 428, 108, 364, 236, 492,
    28, 284, 156, 412, 92, 348, 220, 476, 60, 316, 188, 444, 124, 380, 252, 508,
    2, 258, 130, 386, 66, 322, 194, 450, 34, 290, 162, 418, 98, 354, 226, 482,
    18, 274, 146, 402, 82, 338, 210, 466, 50, 306, 178, 434, 114, 370, 242, 498,
    10, 266, 138, 394, 74, 330, 202, 458, 42, 298, 170, 426, 106, 362, 234, 490,
    26, 282, 154, 410, 90, 346, 218, 474, 58, 314, 186, 442, 122, 378, 250, 506,
    6, 262, 134, 390, 70, 326, 198, 454, 38, 294, 166, 422, 102, 358, 230, 486,
    22, 278, 150, 406, 86, 342, 214, 470, 54, 310, 182, 438, 118, 374, 246, 502,
    14, 270, 142, 398, 78, 334, 206, 462, 46, 302, 174, 430, 110, 366, 238, 494,
    30, 286, 158, 414, 94, 350, 222, 478, 62, 318, 190, 446, 126, 382, 254, 510,
    1, 257, 129, 385, 65, 321, 193, 449, 33, 289, 161, 417, 97, 353, 225, 481,
    17, 273, 145, 401, 81, 337, 209, 465, 49, 305, 177, 433, 113, 369, 241, 497,
    9, 265, 137, 393, 73, 329, 201, 457, 41, 297, 169, 425, 105, 361, 233, 489,
    25, 281, 153, 409, 89, 345, 217, 473, 57, 313, 185, 441, 121, 377, 249, 505,
    5, 261, 133, 389, 69, 325, 197, 453, 37, 293, 165, 421, 101, 357, 229, 485,
    21, 277, 149, 405, 85, 341, 213, 469, 53, 309, 181, 437, 117, 373, 245, 501,
    13, 269, 141, 397, 77, 333, 205, 461, 45, 301, 173, 429, 109, 365, 237, 493,
    29, 285, 157, 413, 93, 349, 221, 477, 61, 317, 189, 445, 125, 381, 253, 509,
    3, 259, 131, 387, 67, 323, 195, 451, 35, 291, 163, 419, 99, 355, 227, 483,
    19, 275, 147, 403, 83, 339, 211, 467, 51, 307, 179, 435, 115, 371, 243, 499,
    11, 267, 139, 395, 75, 331, 203, 459, 43, 299, 171, 427, 107, 363, 235, 491,
    27, 283, 155, 411, 91, 347, 219, 475, 59, 315, 187, 443, 123, 379, 251, 507,
    7, 263, 135, 391, 71, 327, 199, 455, 39, 295, 167, 423, 103, 359, 231, 487,
    23, 279, 151, 407, 87, 343, 215, 471, 55, 311, 183, 439, 119, 375, 247, 503,
    15, 271, 143, 399, 79, 335, 207, 463, 47, 303, 175, 431, 111, 367, 239, 495,
    31, 287, 159, 415, 95, 351, 223, 479, 63, 319, 191, 447, 127, 383, 255, 511
};
uint16_t zarzar_omegas_montgomery[PARAM_N / 2] = {4075, 6974, 7373, 7965, 3262, 5079, 522, 2169, 6364, 1018, 1041, 8775, 2344, 11011, 5574, 1973, 4536, 1050, 6844, 3860, 3818, 6118, 2683, 1190, 4789, 7822, 7540, 6752, 5456, 4449, 3789, 12142, 11973, 382, 3988, 468, 6843, 5339, 6196, 3710, 11316, 1254, 5435, 10930, 3998, 10256, 10367, 3879, 11889, 1728, 6137, 4948, 5862, 6136, 3643, 6874, 8724, 654, 10302, 1702, 7083, 6760, 56, 3199, 9987, 605, 11785, 8076, 5594, 9260, 6403, 4782, 6212, 4624, 9026, 8689, 4080, 11868, 6221, 3602, 975, 8077, 8851, 9445, 5681, 3477, 1105, 142, 241, 12231, 1003, 3532, 5009, 1956, 6008, 11404, 7377, 2049, 10968, 12097, 7591, 5057, 3445, 4780, 2920, 7048, 3127, 8120, 11279, 6821, 11502, 8807, 12138, 2127, 2839, 3957, 431, 1579, 6383, 9784, 5874, 677, 3336, 6234, 2766, 1323, 9115, 12237, 2031, 6956, 6413, 2281, 3969, 3991, 12133, 9522, 4737, 10996, 4774, 5429, 11871, 3772, 453, 5908, 2882, 1805, 2051, 1954, 11713, 3963, 2447, 6142, 8174, 3030, 1843, 2361, 12071, 2908, 3529, 3434, 3202, 7796, 2057, 5369, 11939, 1512, 6906, 10474, 11026, 49, 10806, 5915, 1489, 9789, 5942, 10706, 10431, 7535, 426, 8974, 3757, 10314, 9364, 347, 5868, 9551, 9634, 6554, 10596, 9280, 11566, 174, 2948, 2503, 6507, 10723, 11606, 2459, 64, 3656, 8455, 5257, 5919, 7856, 1747, 9166, 5486, 9235, 6065, 835, 3570, 4240, 11580, 4046, 10970, 9139, 1058, 8210, 11848, 922, 7967, 1958, 10211, 1112, 3728, 4049, 11130, 5990, 1404, 325, 948, 11143, 6190, 295, 11637, 5766, 8212, 8273, 2919, 8527, 6119, 6992, 8333, 1360, 2555, 6167, 1200, 7105, 7991, 3329, 9597, 12121, 5106, 5961, 10695, 10327};

uint16_t zarzar_omegas_inv_montgomery[PARAM_N/2]	= {4075, 5315, 4324, 4916, 10120, 11767, 7210, 9027, 10316, 6715, 1278, 9945, 3514, 11248, 11271, 5925, 147, 8500, 7840, 6833, 5537, 4749, 4467, 7500, 11099, 9606, 6171, 8471, 8429, 5445, 11239, 7753, 9090, 12233, 5529, 5206, 10587, 1987, 11635, 3565, 5415, 8646, 6153, 6427, 7341, 6152, 10561, 400, 8410, 1922, 2033, 8291, 1359, 6854, 11035, 973, 8579, 6093, 6950, 5446, 11821, 8301, 11907, 316, 52, 3174, 10966, 9523, 6055, 8953, 11612, 6415, 2505, 5906, 10710, 11858, 8332, 9450, 10162, 151, 3482, 787, 5468, 1010, 4169, 9162, 5241, 9369, 7509, 8844, 7232, 4698, 192, 1321, 10240, 4912, 885, 6281, 10333, 7280, 8757, 11286, 58, 12048, 12147, 11184, 8812, 6608, 2844, 3438, 4212, 11314, 8687, 6068, 421, 8209, 3600, 3263, 7665, 6077, 7507, 5886, 3029, 6695, 4213, 504, 11684, 2302, 1962, 1594, 6328, 7183, 168, 2692, 8960, 4298, 5184, 11089, 6122, 9734, 10929, 3956, 5297, 6170, 3762, 9370, 4016, 4077, 6523, 652, 11994, 6099, 1146, 11341, 11964, 10885, 6299, 1159, 8240, 8561, 11177, 2078, 10331, 4322, 11367, 441, 4079, 11231, 3150, 1319, 8243, 709, 8049, 8719, 11454, 6224, 3054, 6803, 3123, 10542, 4433, 6370, 7032, 3834, 8633, 12225, 9830, 683, 1566, 5782, 9786, 9341, 12115, 723, 3009, 1693, 5735, 2655, 2738, 6421, 11942, 2925, 1975, 8532, 3315, 11863, 4754, 1858, 1583, 6347, 2500, 10800, 6374, 1483, 12240, 1263, 1815, 5383, 10777, 350, 6920, 10232, 4493, 9087, 8855, 8760, 9381, 218, 9928, 10446, 9259, 4115, 6147, 9842, 8326, 576, 10335, 10238, 10484, 9407, 6381, 11836, 8517, 418, 6860, 7515, 1293, 7552, 2767, 156, 8298, 8320, 10008, 5876, 5333, 10258};


uint16_t zarzar_psis_bitrev_montgomery[PARAM_N] = {4075, 6974, 7373, 7965, 3262, 5079, 522, 2169, 6364, 1018, 1041, 8775, 2344, 11011, 5574, 1973, 4536, 1050, 6844, 3860, 3818, 6118, 2683, 1190, 4789, 7822, 7540, 6752, 5456, 4449, 3789, 12142, 11973, 382, 3988, 468, 6843, 5339, 6196, 3710, 11316, 1254, 5435, 10930, 3998, 10256, 10367, 3879, 11889, 1728, 6137, 4948, 5862, 6136, 3643, 6874, 8724, 654, 10302, 1702, 7083, 6760, 56, 3199, 9987, 605, 11785, 8076, 5594, 9260, 6403, 4782, 6212, 4624, 9026, 8689, 4080, 11868, 6221, 3602, 975, 8077, 8851, 9445, 5681, 3477, 1105, 142, 241, 12231, 1003, 3532, 5009, 1956, 6008, 11404, 7377, 2049, 10968, 12097, 7591, 5057, 3445, 4780, 2920, 7048, 3127, 8120, 11279, 6821, 11502, 8807, 12138, 2127, 2839, 3957, 431, 1579, 6383, 9784, 5874, 677, 3336, 6234, 2766, 1323, 9115, 12237, 2031, 6956, 6413, 2281, 3969, 3991, 12133, 9522, 4737, 10996, 4774, 5429, 11871, 3772, 453, 5908, 2882, 1805, 2051, 1954, 11713, 3963, 2447, 6142, 8174, 3030, 1843, 2361, 12071, 2908, 3529, 3434, 3202, 7796, 2057, 5369, 11939, 1512, 6906, 10474, 11026, 49, 10806, 5915, 1489, 9789, 5942, 10706, 10431, 7535, 426, 8974, 3757, 10314, 9364, 347, 5868, 9551, 9634, 6554, 10596, 9280, 11566, 174, 2948, 2503, 6507, 10723, 11606, 2459, 64, 3656, 8455, 5257, 5919, 7856, 1747, 9166, 5486, 9235, 6065, 835, 3570, 4240, 11580, 4046, 10970, 9139, 1058, 8210, 11848, 922, 7967, 1958, 10211, 1112, 3728, 4049, 11130, 5990, 1404, 325, 948, 11143, 6190, 295, 11637, 5766, 8212, 8273, 2919, 8527, 6119, 6992, 8333, 1360, 2555, 6167, 1200, 7105, 7991, 3329, 9597, 12121, 5106, 5961, 10695, 10327, 3051, 9923, 4896, 9326, 81, 3091, 1000, 7969, 4611, 726, 1853, 12149, 4255, 11112, 2768, 10654, 1062, 2294, 3553, 4805, 2747, 4846, 8577, 9154, 1170, 2319, 790, 11334, 9275, 9088, 1326, 5086, 9094, 6429, 11077, 10643, 3504, 3542, 8668, 9744, 1479, 1, 8246, 7143, 11567, 10984, 4134, 5736, 4978, 10938, 5777, 8961, 4591, 5728, 6461, 5023, 9650, 7468, 949, 9664, 2975, 11726, 2744, 9283, 10092, 5067, 12171, 2476, 3748, 11336, 6522, 827, 9452, 5374, 12159, 7935, 3296, 3949, 9893, 4452, 10908, 2525, 3584, 8112, 8011, 10616, 4989, 6958, 11809, 9447, 12280, 1022, 11950, 9821, 11745, 5791, 5092, 2089, 9005, 2881, 3289, 2013, 9048, 729, 7901, 1260, 5755, 4632, 11955, 2426, 10593, 1428, 4890, 5911, 3932, 9558, 8830, 3637, 5542, 145, 5179, 8595, 3707, 10530, 355, 3382, 4231, 9741, 1207, 9041, 7012, 1168, 10146, 11224, 4645, 11885, 10911, 10377, 435, 7952, 4096, 493, 9908, 6845, 6039, 2422, 2187, 9723, 8643, 9852, 9302, 6022, 7278, 1002, 4284, 5088, 1607, 7313, 875, 8509, 9430, 1045, 2481, 5012, 7428, 354, 6591, 9377, 11847, 2401, 1067, 7188, 11516, 390, 8511, 8456, 7270, 545, 8585, 9611, 12047, 1537, 4143, 4714, 4885, 1017, 5084, 1632, 3066, 27, 1440, 8526, 9273, 12046, 11618, 9289, 3400, 9890, 3136, 7098, 8758, 11813, 7384, 3985, 11869, 6730, 10745, 10111, 2249, 4048, 2884, 11136, 2126, 1630, 9103, 5407, 2686, 9042, 2969, 8311, 9424, 9919, 8779, 5332, 10626, 1777, 4654, 10863, 7351, 3636, 9585, 5291, 8374, 2166, 4919, 12176, 9140, 12129, 7852, 12286, 4895, 10805, 2780, 5195, 2305, 7247, 9644, 4053, 10600, 3364, 3271, 4057, 4414, 9442, 7917, 2174};


uint16_t zarzar_psis_inv_montgomery[PARAM_N] = {512, 3020, 2068, 293, 11041, 8000, 4176, 1590, 3042, 5078, 2110, 3805, 3338, 7592, 8682, 11463, 8761, 12217, 8024, 9694, 2455, 6320, 11164, 2485, 7073, 9173, 438, 8536, 425, 4523, 6613, 9916, 10485, 11249, 10763, 3480, 1325, 2535, 8328, 9951, 5219, 6878, 10423, 7235, 3408, 9349, 12229, 10783, 3982, 4094, 9363, 5207, 4119, 3846, 5596, 365, 3017, 10595, 1721, 7559, 4167, 2593, 7326, 6921, 2900, 11345, 8257, 6940, 2148, 2301, 9828, 10734, 3981, 2840, 9839, 12239, 11034, 11511, 7508, 1658, 2291, 9577, 3205, 567, 10545, 466, 6781, 11675, 4251, 9617, 4209, 6105, 11912, 6513, 7406, 8929, 1687, 1790, 8062, 8190, 8945, 9462, 6463, 6151, 8151, 9195, 3448, 10353, 5478, 12150, 10029, 4719, 6617, 2643, 8581, 7699, 7681, 9687, 5966, 9652, 11232, 1734, 11572, 10268, 9489, 3454, 5588, 2622, 6825, 5406, 7885, 7434, 7174, 648, 1518, 11066, 2483, 4565, 10125, 2213, 10077, 3466, 8347, 9199, 8464, 8449, 1928, 9068, 3947, 9360, 1445, 5547, 364, 1763, 11071, 8753, 2185, 11832, 4505, 8619, 6195, 1882, 540, 1265, 1029, 21, 1756, 2293, 12085, 2253, 11081, 9004, 9714, 2957, 9089, 5703, 11653, 1241, 7800, 11445, 10767, 8496, 11710, 11274, 5246, 3869, 9860, 1706, 1038, 11307, 9761, 450, 11295, 7002, 6162, 9656, 3959, 12119, 8022, 7186, 3407, 8095, 416, 5526, 10897, 11759, 11275, 6500, 3393, 2828, 7080, 5662, 9395, 8468, 1176, 24, 5518, 865, 3278, 6086, 375, 3268, 5835, 5135, 12143, 1251, 8051, 6685, 1892, 791, 8794, 4443, 4605, 11129, 7751, 11444, 9513, 8972, 6453, 5900, 622, 5781, 11153, 980, 20, 502, 2769, 6828, 9168, 6457, 10916, 11007, 2231, 8071, 7187, 4661, 7619, 5673, 10900, 3232, 9847, 9982, 7226, 4411, 1344, 1783, 11573, 11522, 9013, 8711, 10962, 7246, 4913, 4113, 8611, 8452, 5690, 7640, 7429, 904, 3028, 12100, 8774, 3941, 1836, 4301, 10872, 4987, 10886, 10254, 4222, 10118, 5724, 1120, 3534, 7596, 1409, 9559, 5211, 9135, 1942, 2046, 9572, 9224, 2947, 8838, 10463, 8239, 8946, 10716, 5987, 11408, 1236, 1530, 1536, 9060, 6204, 879, 8545, 11711, 239, 4770, 9126, 2945, 6330, 11415, 10014, 10487, 1468, 9811, 1705, 12073, 11783, 4504, 7365, 6671, 8914, 7455, 8930, 2941, 1314, 1030, 1275, 1280, 7550, 5170, 6877, 9169, 7711, 10440, 3975, 7605, 406, 5275, 3368, 8345, 6691, 9416, 10224, 3469, 12109, 7771, 11946, 12282, 3511, 3332, 68, 11538, 4499, 1095, 9051, 7207, 5163, 10388, 212, 7779, 9689, 8474, 8700, 9457, 193, 8531, 6444, 6903, 4906, 7624, 11943, 8520, 4939, 12139, 8524, 9955, 10235, 4974, 6873, 4153, 9615, 1701, 7057, 1398, 8054, 10447, 464, 4273, 338, 6026, 11158, 7250, 9929, 2209, 5061, 5370, 11897, 12281, 2257, 3808, 7100, 6164, 12164, 3007, 10344, 6481, 4145, 11872, 5509, 1868, 7562, 7929, 1165, 10808, 10754, 4483, 5609, 4378, 9118, 5202, 10138, 6226, 3889, 10362, 4475, 7866, 8186, 3929, 11366, 10013, 9233, 1944, 4554, 8620, 7449, 1406, 5797, 6639, 5653, 10398, 463, 3019, 814, 769, 5784, 2626, 11841, 3502, 4335, 4352, 1092, 5289, 8635, 1681, 6555, 10918, 1226, 1279, 6296, 5646, 1620, 3795, 3087, 63, 5268, 6879, 11677, 6759, 8665, 2434, 4564, 8871, 2689, 4820, 10381, 3723, 11111, 9757, 7723, 910, 10552, 9244, 3449, 11607, 5002, 5118, 3114, 9343, 4705, 1350, 9307, 8717, 6197, 4390, 11877, 11779};
