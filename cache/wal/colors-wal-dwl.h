/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x20222cff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc7c7caff, 0x20222cff, 0x66697cff },
	[SchemeSel]  = { 0xc7c7caff, 0xDFA8AEff, 0xA19BAAff },
	[SchemeUrg]  = { 0xc7c7caff, 0xA19BAAff, 0xDFA8AEff },
};
